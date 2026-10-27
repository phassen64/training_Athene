using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

// Produkt Eingabe vornehmen
namespace ProNatur_Biomarkt_GmbH
{


    public partial class Form_product : Form
    {
        //  *** Konstanten
        const string C_sSqlTable        = "tab_product";
        const string C_sFilePath_mdf    = @"C:\Users\peter\Documents\ProNatur Biomarkt GmbH.mdf";

        //  *** Variablen der Klasse
        private string          v_Sql;
        private int             v_iKey=-1;
        private SqlConnection   v_sqlConnection = new SqlConnection();

        //  *** Constructor
        public Form_product()
        {
            InitializeComponent();
            v_sqlConnection.ConnectionString = f_sql_getConnectionString();
            f_sqlShow();
        }

        static private string f_sql_getConnectionString()
        {
            // To avoid storing the connection string in your code,
            // you can retrieve it from a configuration file.
            string s;
            s = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename="
                + C_sFilePath_mdf
                + ";Integrated Security = True; Connect Timeout = 30";
            return s;
        }

        private void f_sqlShow()
        {
            //  Datenbank öffnen
            v_sqlConnection.Open();

            //  Grid
            DataSet v_dataSet = new DataSet();

            //  Query erstellen
            v_Sql = "SELECT * FROM " + C_sSqlTable + ";";

            SqlDataAdapter v_sqlDataAdapter = new SqlDataAdapter(v_Sql, v_sqlConnection);
            v_sqlDataAdapter.Fill(v_dataSet);

            //  Grid zuordnen
            dataGridView_produkt.DataSource = v_dataSet.Tables[0];

            //  erste ID-Spalte nicht sichtbar
            dataGridView_produkt.Columns[0].Visible = false;

            //  Datenbank Schliessen
            v_sqlConnection.Close();
        }

        private void f_sqlExecute(string p_sSql)
        {
            //  Query ausführen
            v_sqlConnection.Open();
            SqlCommand pSqlCommand = new SqlCommand(p_sSql, v_sqlConnection);
            pSqlCommand.ExecuteNonQuery();
            v_sqlConnection.Close();
        }

        private void f_status(string s)
        {
            toolStripStatusLabel_info.Text = s;
        }


        private void f_clearGui(string s)
        {
            textBox_produktName.Text = "";
            textBox_marke.Text = "";
            textBox_preis.Text = "";
            comboBox_kategorie.Text = "";
            comboBox_kategorie.SelectedItem = 0;
            f_status(s);
        }

        private void button_leeren_Click(object sender, EventArgs e)
        {
            f_clearGui("buttonClear");
        }

        private void button_bearbeiten_Click(object sender, EventArgs e)
        {
            string s,s0,s1,s2,s3;

            // gridCheck                
            if (v_iKey <= 0)
            {
                MessageBox.Show("Im Grid einen Wert anklicken!");
                f_status("??? GRID not selected");
                return;
            }

            f_sqlShow();

            //  read text fields
            s0 = textBox_produktName.Text;
            s1 = textBox_marke.Text;
            s2 = comboBox_kategorie.Text;
            s3 = textBox_preis.Text;

            //  Query erstellen
            v_Sql = "UPDATE " + C_sSqlTable + " SET ";
            v_Sql += String.Format("NAME='{0}',BRAND='{1}',CATEGORY='{2}',PRICE='{3}' ",s0,s1,s2,s3);
            v_Sql += String.Format("WHERE ID = {0}", v_iKey);
            v_Sql += ";";

            //  Query ausführen
            f_sqlExecute(v_Sql);

            s = textBox_produktName.Text;
            f_status("bearbeiten :< " + s + " >");
        }
        private void button_loeschen_Click(object sender, EventArgs e)
        {
            string s;

            // gridCheck                
            if (v_iKey <= 0)
            {
                MessageBox.Show("Im Grid einen Wert anklicken!");
                f_status("??? GRID not selected");
                return;
            }
            
            f_sqlShow();
            s = textBox_produktName.Text;
            f_status("loeschen : < " + s + " > ...");

            //  Query erstellen
            v_Sql = "DELETE FROM " + C_sSqlTable + " WHERE ID = ";
            v_Sql += String.Format("{0}", v_iKey);      // ohne Syntax '{0}'
            v_Sql += ";";

            //  Query ausführen
            f_sqlExecute(v_Sql);

            //  update
            f_clearGui("!");
            f_status("DONE deleted : < " + s + " > ...");
            f_sqlShow();
        }

        private void button_speichern_Click(object sender, EventArgs e)
        {
            string s="save", s0, s1, s2, s3;
            
            //  read text fields
            s0 = textBox_produktName.Text;
            s1 = textBox_marke.Text;
            s2 = comboBox_kategorie.Text;
            s3 = textBox_preis.Text;

            //  float value
            // f = float.Parse(textBox_preis.Text);

            if (    String.IsNullOrEmpty(s0) || 
                    String.IsNullOrEmpty(s1) ||
                    String.IsNullOrEmpty(s2) ||
                    String.IsNullOrEmpty(s3)
                )
            {
                MessageBox.Show("Wert eingeben!");
                f_status("??? empty fields");
                return;            
            }

            //  Query erstellen
            v_Sql  = "INSERT INTO " + C_sSqlTable + " VALUES(";
            v_Sql += String.Format("'{0}','{1}','{2}','{3}'",s0,s1,s2,s3);
            v_Sql += ");";

            //  Query ausführen
            f_sqlExecute(v_Sql);

            // dennoch Anzeige löschen                
            f_clearGui("added");
            
            //  show new values
            f_sqlShow();
            f_status("speichern : < " + s + " >");
        }

        private void dataGridView_produkt_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            v_iKey                      = (int)dataGridView_produkt.SelectedRows[0].Cells[0].Value;
            textBox_produktName.Text    = dataGridView_produkt.SelectedRows[0].Cells[1].Value.ToString();
            textBox_marke.Text          = dataGridView_produkt.SelectedRows[0].Cells[2].Value.ToString();
            comboBox_kategorie.Text     = dataGridView_produkt.SelectedRows[0].Cells[3].Value.ToString();
            textBox_preis.Text          = dataGridView_produkt.SelectedRows[0].Cells[4].Value.ToString();
            f_status("Selected Key : < " + v_iKey + " >");
        }
    }
}
