namespace Version_1
{
    partial class frmCapNhat
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
            this.label5 = new System.Windows.Forms.Label();
            this.txtMaSo = new System.Windows.Forms.TextBox();
            this.lblLaiSuat = new System.Windows.Forms.Label();
            this.lblKyHan = new System.Windows.Forms.Label();
            this.cmbKyHan = new System.Windows.Forms.ComboBox();
            this.rdbKhongKyHan = new System.Windows.Forms.RadioButton();
            this.rdbSoCoKyHan = new System.Windows.Forms.RadioButton();
            this.dtpNgayLapSo = new System.Windows.Forms.DateTimePicker();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.txtSoTienGui = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.txtHoTen = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.txtCMND = new System.Windows.Forms.TextBox();
            this.btnCapNhat = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(463, 119);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(48, 17);
            this.label5.TabIndex = 36;
            this.label5.Text = "Mã Sổ";
            // 
            // txtMaSo
            // 
            this.txtMaSo.Location = new System.Drawing.Point(563, 114);
            this.txtMaSo.Name = "txtMaSo";
            this.txtMaSo.Size = new System.Drawing.Size(100, 22);
            this.txtMaSo.TabIndex = 35;
            // 
            // lblLaiSuat
            // 
            this.lblLaiSuat.AutoSize = true;
            this.lblLaiSuat.Location = new System.Drawing.Point(412, 240);
            this.lblLaiSuat.Name = "lblLaiSuat";
            this.lblLaiSuat.Size = new System.Drawing.Size(60, 17);
            this.lblLaiSuat.TabIndex = 34;
            this.lblLaiSuat.Text = "Lãi Suất";
            // 
            // lblKyHan
            // 
            this.lblKyHan.AutoSize = true;
            this.lblKyHan.Location = new System.Drawing.Point(123, 240);
            this.lblKyHan.Name = "lblKyHan";
            this.lblKyHan.Size = new System.Drawing.Size(80, 17);
            this.lblKyHan.TabIndex = 33;
            this.lblKyHan.Text = "Kỳ Hạn Gửi";
            this.lblKyHan.Visible = false;
            // 
            // cmbKyHan
            // 
            this.cmbKyHan.FormattingEnabled = true;
            this.cmbKyHan.Location = new System.Drawing.Point(227, 237);
            this.cmbKyHan.Name = "cmbKyHan";
            this.cmbKyHan.Size = new System.Drawing.Size(121, 24);
            this.cmbKyHan.TabIndex = 32;
            this.cmbKyHan.Visible = false;
            this.cmbKyHan.SelectionChangeCommitted += new System.EventHandler(this.cmbKyHan_SelectionChangeCommitted);
            // 
            // rdbKhongKyHan
            // 
            this.rdbKhongKyHan.AutoSize = true;
            this.rdbKhongKyHan.Location = new System.Drawing.Point(238, 185);
            this.rdbKhongKyHan.Name = "rdbKhongKyHan";
            this.rdbKhongKyHan.Size = new System.Drawing.Size(141, 21);
            this.rdbKhongKyHan.TabIndex = 31;
            this.rdbKhongKyHan.TabStop = true;
            this.rdbKhongKyHan.Text = "Sổ Không Kỳ Hạn";
            this.rdbKhongKyHan.UseVisualStyleBackColor = true;
            this.rdbKhongKyHan.CheckedChanged += new System.EventHandler(this.rdbKhongKyHan_CheckedChanged_1);
            // 
            // rdbSoCoKyHan
            // 
            this.rdbSoCoKyHan.AutoSize = true;
            this.rdbSoCoKyHan.Location = new System.Drawing.Point(87, 185);
            this.rdbSoCoKyHan.Name = "rdbSoCoKyHan";
            this.rdbSoCoKyHan.Size = new System.Drawing.Size(121, 21);
            this.rdbSoCoKyHan.TabIndex = 30;
            this.rdbSoCoKyHan.TabStop = true;
            this.rdbSoCoKyHan.Text = "Sổ Có Kỳ  Hạn";
            this.rdbSoCoKyHan.UseVisualStyleBackColor = true;
            this.rdbSoCoKyHan.CheckedChanged += new System.EventHandler(this.rdbSoCoKyHan_CheckedChanged_1);
            // 
            // dtpNgayLapSo
            // 
            this.dtpNgayLapSo.Location = new System.Drawing.Point(126, 119);
            this.dtpNgayLapSo.Name = "dtpNgayLapSo";
            this.dtpNgayLapSo.Size = new System.Drawing.Size(259, 22);
            this.dtpNgayLapSo.TabIndex = 29;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(19, 119);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(90, 17);
            this.label4.TabIndex = 28;
            this.label4.Text = "Ngày Lập Sổ";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(463, 55);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(83, 17);
            this.label3.TabIndex = 27;
            this.label3.Text = "Số Tiền Gửi";
            // 
            // txtSoTienGui
            // 
            this.txtSoTienGui.Location = new System.Drawing.Point(563, 50);
            this.txtSoTienGui.Name = "txtSoTienGui";
            this.txtSoTienGui.Size = new System.Drawing.Size(100, 22);
            this.txtSoTienGui.TabIndex = 26;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(235, 55);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(55, 17);
            this.label2.TabIndex = 25;
            this.label2.Text = "Họ Tên";
            // 
            // txtHoTen
            // 
            this.txtHoTen.Location = new System.Drawing.Point(303, 50);
            this.txtHoTen.Name = "txtHoTen";
            this.txtHoTen.Size = new System.Drawing.Size(100, 22);
            this.txtHoTen.TabIndex = 24;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(19, 57);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(48, 17);
            this.label1.TabIndex = 23;
            this.label1.Text = "CMND";
            // 
            // txtCMND
            // 
            this.txtCMND.Location = new System.Drawing.Point(87, 52);
            this.txtCMND.Name = "txtCMND";
            this.txtCMND.Size = new System.Drawing.Size(100, 22);
            this.txtCMND.TabIndex = 22;
            // 
            // btnCapNhat
            // 
            this.btnCapNhat.Location = new System.Drawing.Point(126, 307);
            this.btnCapNhat.Name = "btnCapNhat";
            this.btnCapNhat.Size = new System.Drawing.Size(353, 67);
            this.btnCapNhat.TabIndex = 37;
            this.btnCapNhat.Text = "Cập Nhật";
            this.btnCapNhat.UseVisualStyleBackColor = true;
            this.btnCapNhat.Click += new System.EventHandler(this.btnCapNhat_Click);
            // 
            // frmCapNhat
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(716, 437);
            this.Controls.Add(this.btnCapNhat);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.txtMaSo);
            this.Controls.Add(this.lblLaiSuat);
            this.Controls.Add(this.lblKyHan);
            this.Controls.Add(this.cmbKyHan);
            this.Controls.Add(this.rdbKhongKyHan);
            this.Controls.Add(this.rdbSoCoKyHan);
            this.Controls.Add(this.dtpNgayLapSo);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txtSoTienGui);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtHoTen);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtCMND);
            this.Name = "frmCapNhat";
            this.Text = "Cập Nhật Thông Tin";
            this.Load += new System.EventHandler(this.frmCapNhat_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtMaSo;
        private System.Windows.Forms.Label lblLaiSuat;
        private System.Windows.Forms.Label lblKyHan;
        private System.Windows.Forms.ComboBox cmbKyHan;
        private System.Windows.Forms.RadioButton rdbKhongKyHan;
        private System.Windows.Forms.RadioButton rdbSoCoKyHan;
        private System.Windows.Forms.DateTimePicker dtpNgayLapSo;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtSoTienGui;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtHoTen;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtCMND;
        private System.Windows.Forms.Button btnCapNhat;
    }
}