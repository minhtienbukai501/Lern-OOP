namespace Version_1
{
    partial class FormTimKiem
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
            this.CMND = new System.Windows.Forms.Label();
            this.txtCMND = new System.Windows.Forms.TextBox();
            this.btnTimKiem = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // CMND
            // 
            this.CMND.AutoSize = true;
            this.CMND.Location = new System.Drawing.Point(48, 49);
            this.CMND.Name = "CMND";
            this.CMND.Size = new System.Drawing.Size(48, 17);
            this.CMND.TabIndex = 0;
            this.CMND.Text = "CMND";
            // 
            // txtCMND
            // 
            this.txtCMND.Location = new System.Drawing.Point(110, 44);
            this.txtCMND.Name = "txtCMND";
            this.txtCMND.Size = new System.Drawing.Size(418, 22);
            this.txtCMND.TabIndex = 1;
            // 
            // btnTimKiem
            // 
            this.btnTimKiem.Location = new System.Drawing.Point(178, 99);
            this.btnTimKiem.Name = "btnTimKiem";
            this.btnTimKiem.Size = new System.Drawing.Size(183, 38);
            this.btnTimKiem.TabIndex = 2;
            this.btnTimKiem.Text = "Tìm Kiếm";
            this.btnTimKiem.UseVisualStyleBackColor = true;
            this.btnTimKiem.Click += new System.EventHandler(this.btnTimKiem_Click);
            // 
            // FormTimKiem
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(542, 176);
            this.Controls.Add(this.btnTimKiem);
            this.Controls.Add(this.txtCMND);
            this.Controls.Add(this.CMND);
            this.Name = "FormTimKiem";
            this.Text = "Tìm Kiếm";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label CMND;
        private System.Windows.Forms.TextBox txtCMND;
        private System.Windows.Forms.Button btnTimKiem;
    }
}