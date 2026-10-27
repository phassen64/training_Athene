
namespace ProNatur_Biomarkt_GmbH
{
    partial class Form_main
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form_main));
            this.button_products = new System.Windows.Forms.Button();
            this.button_bill = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // button_products
            // 
            this.button_products.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button_products.BackgroundImage")));
            this.button_products.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_products.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.button_products.Location = new System.Drawing.Point(21, 22);
            this.button_products.Name = "button_products";
            this.button_products.Size = new System.Drawing.Size(275, 125);
            this.button_products.TabIndex = 0;
            this.button_products.Text = "Produkte verwalten";
            this.button_products.UseVisualStyleBackColor = true;
            this.button_products.Click += new System.EventHandler(this.button_products_Click);
            // 
            // button_bill
            // 
            this.button_bill.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("button_bill.BackgroundImage")));
            this.button_bill.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_bill.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.button_bill.Location = new System.Drawing.Point(314, 22);
            this.button_bill.Name = "button_bill";
            this.button_bill.Size = new System.Drawing.Size(275, 125);
            this.button_bill.TabIndex = 1;
            this.button_bill.Text = "Rechnung stellen";
            this.button_bill.UseVisualStyleBackColor = true;
            // 
            // Form_main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(612, 170);
            this.Controls.Add(this.button_bill);
            this.Controls.Add(this.button_products);
            this.Name = "Form_main";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Hauptmenue";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button button_products;
        private System.Windows.Forms.Button button_bill;
    }
}