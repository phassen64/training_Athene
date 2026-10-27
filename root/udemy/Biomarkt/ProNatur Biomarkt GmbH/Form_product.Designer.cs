
namespace ProNatur_Biomarkt_GmbH
{
    partial class Form_product
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form_product));
            this.label_produktName = new System.Windows.Forms.Label();
            this.textBox_produktName = new System.Windows.Forms.TextBox();
            this.textBox_marke = new System.Windows.Forms.TextBox();
            this.label_marke = new System.Windows.Forms.Label();
            this.label_kategorie = new System.Windows.Forms.Label();
            this.textBox_preis = new System.Windows.Forms.TextBox();
            this.label_preis = new System.Windows.Forms.Label();
            this.comboBox_kategorie = new System.Windows.Forms.ComboBox();
            this.button_speichern = new System.Windows.Forms.Button();
            this.button_loeschen = new System.Windows.Forms.Button();
            this.button_leeren = new System.Windows.Forms.Button();
            this.button_bearbeiten = new System.Windows.Forms.Button();
            this.dataGridView_produkt = new System.Windows.Forms.DataGridView();
            this.statusStrip_produkt = new System.Windows.Forms.StatusStrip();
            this.toolStripStatusLabel_info = new System.Windows.Forms.ToolStripStatusLabel();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_produkt)).BeginInit();
            this.statusStrip_produkt.SuspendLayout();
            this.SuspendLayout();
            // 
            // label_produktName
            // 
            this.label_produktName.AutoSize = true;
            this.label_produktName.BackColor = System.Drawing.Color.Transparent;
            this.label_produktName.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label_produktName.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label_produktName.Location = new System.Drawing.Point(29, 29);
            this.label_produktName.Name = "label_produktName";
            this.label_produktName.Size = new System.Drawing.Size(57, 16);
            this.label_produktName.TabIndex = 0;
            this.label_produktName.Text = "Name :";
            // 
            // textBox_produktName
            // 
            this.textBox_produktName.BackColor = System.Drawing.SystemColors.Desktop;
            this.textBox_produktName.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.textBox_produktName.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox_produktName.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.textBox_produktName.Location = new System.Drawing.Point(112, 27);
            this.textBox_produktName.Name = "textBox_produktName";
            this.textBox_produktName.Size = new System.Drawing.Size(175, 22);
            this.textBox_produktName.TabIndex = 1;
            // 
            // textBox_marke
            // 
            this.textBox_marke.BackColor = System.Drawing.SystemColors.Desktop;
            this.textBox_marke.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.textBox_marke.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox_marke.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.textBox_marke.Location = new System.Drawing.Point(112, 55);
            this.textBox_marke.Name = "textBox_marke";
            this.textBox_marke.Size = new System.Drawing.Size(175, 22);
            this.textBox_marke.TabIndex = 2;
            this.textBox_marke.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // label_marke
            // 
            this.label_marke.AutoSize = true;
            this.label_marke.BackColor = System.Drawing.Color.Transparent;
            this.label_marke.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label_marke.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label_marke.Location = new System.Drawing.Point(29, 57);
            this.label_marke.Name = "label_marke";
            this.label_marke.Size = new System.Drawing.Size(59, 16);
            this.label_marke.TabIndex = 2;
            this.label_marke.Text = "Marke :";
            // 
            // label_kategorie
            // 
            this.label_kategorie.AutoSize = true;
            this.label_kategorie.BackColor = System.Drawing.Color.Transparent;
            this.label_kategorie.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label_kategorie.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label_kategorie.Location = new System.Drawing.Point(29, 85);
            this.label_kategorie.Name = "label_kategorie";
            this.label_kategorie.Size = new System.Drawing.Size(83, 16);
            this.label_kategorie.TabIndex = 4;
            this.label_kategorie.Text = "Kategorie :";
            // 
            // textBox_preis
            // 
            this.textBox_preis.BackColor = System.Drawing.SystemColors.Desktop;
            this.textBox_preis.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.textBox_preis.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox_preis.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.textBox_preis.Location = new System.Drawing.Point(112, 111);
            this.textBox_preis.Name = "textBox_preis";
            this.textBox_preis.Size = new System.Drawing.Size(69, 22);
            this.textBox_preis.TabIndex = 4;
            this.textBox_preis.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            this.textBox_preis.WordWrap = false;
            // 
            // label_preis
            // 
            this.label_preis.AutoSize = true;
            this.label_preis.BackColor = System.Drawing.Color.Transparent;
            this.label_preis.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label_preis.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label_preis.Location = new System.Drawing.Point(29, 113);
            this.label_preis.Name = "label_preis";
            this.label_preis.Size = new System.Drawing.Size(52, 16);
            this.label_preis.TabIndex = 6;
            this.label_preis.Text = "Preis :";
            // 
            // comboBox_kategorie
            // 
            this.comboBox_kategorie.BackColor = System.Drawing.SystemColors.Desktop;
            this.comboBox_kategorie.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.comboBox_kategorie.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.comboBox_kategorie.FormattingEnabled = true;
            this.comboBox_kategorie.Items.AddRange(new object[] {
            "Obst",
            "Gemüse",
            "Fisch",
            "Fleisch",
            "Getränke",
            "Drogerie"});
            this.comboBox_kategorie.Location = new System.Drawing.Point(112, 83);
            this.comboBox_kategorie.Name = "comboBox_kategorie";
            this.comboBox_kategorie.Size = new System.Drawing.Size(175, 21);
            this.comboBox_kategorie.TabIndex = 3;
            // 
            // button_speichern
            // 
            this.button_speichern.BackColor = System.Drawing.SystemColors.ControlText;
            this.button_speichern.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button_speichern.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_speichern.ForeColor = System.Drawing.Color.Green;
            this.button_speichern.Location = new System.Drawing.Point(66, 154);
            this.button_speichern.Name = "button_speichern";
            this.button_speichern.Size = new System.Drawing.Size(115, 30);
            this.button_speichern.TabIndex = 10;
            this.button_speichern.Text = "ADD";
            this.button_speichern.UseVisualStyleBackColor = false;
            this.button_speichern.Click += new System.EventHandler(this.button_speichern_Click);
            // 
            // button_loeschen
            // 
            this.button_loeschen.BackColor = System.Drawing.SystemColors.ControlText;
            this.button_loeschen.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button_loeschen.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_loeschen.ForeColor = System.Drawing.Color.Red;
            this.button_loeschen.Location = new System.Drawing.Point(318, 154);
            this.button_loeschen.Name = "button_loeschen";
            this.button_loeschen.Size = new System.Drawing.Size(115, 30);
            this.button_loeschen.TabIndex = 8;
            this.button_loeschen.Text = "DELETE";
            this.button_loeschen.UseVisualStyleBackColor = false;
            this.button_loeschen.Click += new System.EventHandler(this.button_loeschen_Click);
            // 
            // button_leeren
            // 
            this.button_leeren.BackColor = System.Drawing.SystemColors.ControlText;
            this.button_leeren.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button_leeren.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_leeren.ForeColor = System.Drawing.Color.Yellow;
            this.button_leeren.Location = new System.Drawing.Point(655, 154);
            this.button_leeren.Name = "button_leeren";
            this.button_leeren.Size = new System.Drawing.Size(100, 30);
            this.button_leeren.TabIndex = 7;
            this.button_leeren.Text = "CLEAR";
            this.button_leeren.UseVisualStyleBackColor = false;
            this.button_leeren.Click += new System.EventHandler(this.button_leeren_Click);
            // 
            // button_bearbeiten
            // 
            this.button_bearbeiten.BackColor = System.Drawing.SystemColors.ControlText;
            this.button_bearbeiten.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button_bearbeiten.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_bearbeiten.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.button_bearbeiten.Location = new System.Drawing.Point(192, 154);
            this.button_bearbeiten.Name = "button_bearbeiten";
            this.button_bearbeiten.Size = new System.Drawing.Size(115, 30);
            this.button_bearbeiten.TabIndex = 5;
            this.button_bearbeiten.Text = "CHANGE";
            this.button_bearbeiten.UseVisualStyleBackColor = false;
            this.button_bearbeiten.Click += new System.EventHandler(this.button_bearbeiten_Click);
            // 
            // dataGridView_produkt
            // 
            this.dataGridView_produkt.AllowUserToAddRows = false;
            this.dataGridView_produkt.AllowUserToDeleteRows = false;
            this.dataGridView_produkt.AllowUserToResizeColumns = false;
            this.dataGridView_produkt.AllowUserToResizeRows = false;
            this.dataGridView_produkt.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dataGridView_produkt.BackgroundColor = System.Drawing.Color.Black;
            this.dataGridView_produkt.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_produkt.GridColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.dataGridView_produkt.Location = new System.Drawing.Point(32, 206);
            this.dataGridView_produkt.MultiSelect = false;
            this.dataGridView_produkt.Name = "dataGridView_produkt";
            this.dataGridView_produkt.ReadOnly = true;
            this.dataGridView_produkt.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.dataGridView_produkt.RowHeadersVisible = false;
            this.dataGridView_produkt.RowTemplate.DefaultCellStyle.BackColor = System.Drawing.Color.Navy;
            this.dataGridView_produkt.RowTemplate.DefaultCellStyle.ForeColor = System.Drawing.Color.Yellow;
            this.dataGridView_produkt.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.dataGridView_produkt.Size = new System.Drawing.Size(743, 223);
            this.dataGridView_produkt.TabIndex = 11;
            this.dataGridView_produkt.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView_produkt_CellContentClick);
            // 
            // statusStrip_produkt
            // 
            this.statusStrip_produkt.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripStatusLabel_info});
            this.statusStrip_produkt.Location = new System.Drawing.Point(0, 439);
            this.statusStrip_produkt.Name = "statusStrip_produkt";
            this.statusStrip_produkt.Size = new System.Drawing.Size(799, 22);
            this.statusStrip_produkt.TabIndex = 12;
            this.statusStrip_produkt.Text = "run";
            // 
            // toolStripStatusLabel_info
            // 
            this.toolStripStatusLabel_info.Name = "toolStripStatusLabel_info";
            this.toolStripStatusLabel_info.Size = new System.Drawing.Size(108, 17);
            this.toolStripStatusLabel_info.Text = "ENTER something !";
            // 
            // Form_product
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::ProNatur_Biomarkt_GmbH.Properties.Resources.ImgBgProducts;
            this.ClientSize = new System.Drawing.Size(799, 461);
            this.Controls.Add(this.statusStrip_produkt);
            this.Controls.Add(this.dataGridView_produkt);
            this.Controls.Add(this.button_bearbeiten);
            this.Controls.Add(this.button_leeren);
            this.Controls.Add(this.button_loeschen);
            this.Controls.Add(this.button_speichern);
            this.Controls.Add(this.comboBox_kategorie);
            this.Controls.Add(this.textBox_preis);
            this.Controls.Add(this.label_preis);
            this.Controls.Add(this.label_kategorie);
            this.Controls.Add(this.textBox_marke);
            this.Controls.Add(this.label_marke);
            this.Controls.Add(this.textBox_produktName);
            this.Controls.Add(this.label_produktName);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.Name = "Form_product";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Produkte";
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_produkt)).EndInit();
            this.statusStrip_produkt.ResumeLayout(false);
            this.statusStrip_produkt.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button_speichern;
        private System.Windows.Forms.Button button_loeschen;
        private System.Windows.Forms.Button button_leeren;
        private System.Windows.Forms.Button button_bearbeiten;
        private System.Windows.Forms.ComboBox comboBox_kategorie;
        private System.Windows.Forms.DataGridView dataGridView_produkt;
        private System.Windows.Forms.Label label_marke;
        private System.Windows.Forms.Label label_produktName;
        private System.Windows.Forms.Label label_kategorie;
        private System.Windows.Forms.Label label_preis;
        private System.Windows.Forms.StatusStrip statusStrip_produkt;
        private System.Windows.Forms.TextBox textBox_marke;
        private System.Windows.Forms.TextBox textBox_produktName;
        private System.Windows.Forms.TextBox textBox_preis;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel_info;
    }
}