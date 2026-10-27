
namespace ProNatur_Biomarkt_GmbH
{
    partial class Form_loadingScreen
    {
        /// <summary>
        /// Erforderliche Designervariable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Verwendete Ressourcen bereinigen.
        /// </summary>
        /// <param name="disposing">True, wenn verwaltete Ressourcen gelöscht werden sollen; andernfalls False.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Vom Windows Form-Designer generierter Code

        /// <summary>
        /// Erforderliche Methode für die Designerunterstützung.
        /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form_loadingScreen));
            this.progressBar_main = new System.Windows.Forms.ProgressBar();
            this.label_loading = new System.Windows.Forms.Label();
            this.label_pct = new System.Windows.Forms.Label();
            this.pictureBox_main = new System.Windows.Forms.PictureBox();
            this.timer_loading = new System.Windows.Forms.Timer(this.components);
            this.button_restart = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox_main)).BeginInit();
            this.SuspendLayout();
            // 
            // progressBar_main
            // 
            this.progressBar_main.Anchor = System.Windows.Forms.AnchorStyles.Bottom;
            this.progressBar_main.Location = new System.Drawing.Point(21, 417);
            this.progressBar_main.Name = "progressBar_main";
            this.progressBar_main.Size = new System.Drawing.Size(1001, 23);
            this.progressBar_main.TabIndex = 1;
            this.progressBar_main.Value = 5;
            // 
            // label_loading
            // 
            this.label_loading.Anchor = System.Windows.Forms.AnchorStyles.Bottom;
            this.label_loading.AutoSize = true;
            this.label_loading.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label_loading.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label_loading.Location = new System.Drawing.Point(315, 386);
            this.label_loading.Name = "label_loading";
            this.label_loading.Size = new System.Drawing.Size(45, 20);
            this.label_loading.TabIndex = 2;
            this.label_loading.Text = "wait !";
            // 
            // label_pct
            // 
            this.label_pct.Anchor = System.Windows.Forms.AnchorStyles.Bottom;
            this.label_pct.BackColor = System.Drawing.Color.Transparent;
            this.label_pct.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label_pct.ForeColor = System.Drawing.Color.White;
            this.label_pct.Location = new System.Drawing.Point(401, 386);
            this.label_pct.Name = "label_pct";
            this.label_pct.Size = new System.Drawing.Size(53, 20);
            this.label_pct.TabIndex = 3;
            this.label_pct.Text = "%";
            // 
            // pictureBox_main
            // 
            this.pictureBox_main.Anchor = System.Windows.Forms.AnchorStyles.Bottom;
            this.pictureBox_main.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox_main.Image")));
            this.pictureBox_main.Location = new System.Drawing.Point(21, 12);
            this.pictureBox_main.Name = "pictureBox_main";
            this.pictureBox_main.Size = new System.Drawing.Size(1001, 355);
            this.pictureBox_main.TabIndex = 4;
            this.pictureBox_main.TabStop = false;
            // 
            // timer_loading
            // 
            this.timer_loading.Tick += new System.EventHandler(this.timer_loading_Tick);
            // 
            // button_restart
            // 
            this.button_restart.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button_restart.Location = new System.Drawing.Point(21, 383);
            this.button_restart.Name = "button_restart";
            this.button_restart.Size = new System.Drawing.Size(103, 23);
            this.button_restart.TabIndex = 5;
            this.button_restart.Text = "RESTART";
            this.button_restart.UseVisualStyleBackColor = true;
            this.button_restart.Click += new System.EventHandler(this.button_restart_Click);
            // 
            // Form_LoadingScreen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(0)))), ((int)(((byte)(64)))));
            this.ClientSize = new System.Drawing.Size(1034, 461);
            this.Controls.Add(this.button_restart);
            this.Controls.Add(this.pictureBox_main);
            this.Controls.Add(this.label_pct);
            this.Controls.Add(this.label_loading);
            this.Controls.Add(this.progressBar_main);
            this.HelpButton = true;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Form_LoadingScreen";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Unser ProNatur Biomarkt 2022";
            this.Load += new System.EventHandler(this.Form_LoadingScreen_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox_main)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.ProgressBar progressBar_main;
        private System.Windows.Forms.Label label_loading;
        private System.Windows.Forms.Label label_pct;
        private System.Windows.Forms.PictureBox pictureBox_main;
        private System.Windows.Forms.Timer timer_loading;
        private System.Windows.Forms.Button button_restart;
    }
}

