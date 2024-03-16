namespace Version_1
{
    partial class Form1
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
            this.txtCMND = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txtHoTen = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.txtSoTienGui = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.dtpNgayLapSo = new System.Windows.Forms.DateTimePicker();
            this.rdbSoCoKyHan = new System.Windows.Forms.RadioButton();
            this.rdbKhongKyHan = new System.Windows.Forms.RadioButton();
            this.lblKyHan = new System.Windows.Forms.Label();
            this.cmbKyHan = new System.Windows.Forms.ComboBox();
            this.lsvDanhSach = new System.Windows.Forms.ListView();
            this.lblLaiSuat = new System.Windows.Forms.Label();
            this.btnThem = new System.Windows.Forms.Button();
            this.btnXoa = new System.Windows.Forms.Button();
            this.btnSua = new System.Windows.Forms.Button();
            this.label5 = new System.Windows.Forms.Label();
            this.txtMaSo = new System.Windows.Forms.TextBox();
            this.btnTimKiem = new System.Windows.Forms.Button();
            this.btnXemTienLai = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // txtCMND
            // 
            this.txtCMND.Location = new System.Drawing.Point(104, 36);
            this.txtCMND.Name = "txtCMND";
            this.txtCMND.Size = new System.Drawing.Size(100, 22);
            this.txtCMND.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(36, 41);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(48, 17);
            this.label1.TabIndex = 1;
            this.label1.Text = "CMND";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(252, 39);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(55, 17);
            this.label2.TabIndex = 3;
            this.label2.Text = "Họ Tên";
            // 
            // txtHoTen
            // 
            this.txtHoTen.Location = new System.Drawing.Point(320, 34);
            this.txtHoTen.Name = "txtHoTen";
            this.txtHoTen.Size = new System.Drawing.Size(100, 22);
            this.txtHoTen.TabIndex = 2;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(480, 39);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(83, 17);
            this.label3.TabIndex = 5;
            this.label3.Text = "Số Tiền Gửi";
            // 
            // txtSoTienGui
            // 
            this.txtSoTienGui.Location = new System.Drawing.Point(580, 34);
            this.txtSoTienGui.Name = "txtSoTienGui";
            this.txtSoTienGui.Size = new System.Drawing.Size(100, 22);
            this.txtSoTienGui.TabIndex = 4;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(36, 103);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(90, 17);
            this.label4.TabIndex = 7;
            this.label4.Text = "Ngày Lập Sổ";
            // 
            // dtpNgayLapSo
            // 
            this.dtpNgayLapSo.Location = new System.Drawing.Point(143, 103);
            this.dtpNgayLapSo.Name = "dtpNgayLapSo";
            this.dtpNgayLapSo.Size = new System.Drawing.Size(259, 22);
            this.dtpNgayLapSo.TabIndex = 8;
            // 
            // rdbSoCoKyHan
            // 
            this.rdbSoCoKyHan.AutoSize = true;
            this.rdbSoCoKyHan.Location = new System.Drawing.Point(104, 169);
            this.rdbSoCoKyHan.Name = "rdbSoCoKyHan";
            this.rdbSoCoKyHan.Size = new System.Drawing.Size(121, 21);
            this.rdbSoCoKyHan.TabIndex = 11;
            this.rdbSoCoKyHan.TabStop = true;
            this.rdbSoCoKyHan.Text = "Sổ Có Kỳ  Hạn";
            this.rdbSoCoKyHan.UseVisualStyleBackColor = true;
            this.rdbSoCoKyHan.CheckedChanged += new System.EventHandler(this.rdbSoCoKyHan_CheckedChanged);
            // 
            // rdbKhongKyHan
            // 
            this.rdbKhongKyHan.AutoSize = true;
            this.rdbKhongKyHan.Location = new System.Drawing.Point(255, 169);
            this.rdbKhongKyHan.Name = "rdbKhongKyHan";
            this.rdbKhongKyHan.Size = new System.Drawing.Size(141, 21);
            this.rdbKhongKyHan.TabIndex = 12;
            this.rdbKhongKyHan.TabStop = true;
            this.rdbKhongKyHan.Text = "Sổ Không Kỳ Hạn";
            this.rdbKhongKyHan.UseVisualStyleBackColor = true;
            this.rdbKhongKyHan.CheckedChanged += new System.EventHandler(this.rdbKhongKyHan_CheckedChanged);
            // 
            // lblKyHan
            // 
            this.lblKyHan.AutoSize = true;
            this.lblKyHan.Location = new System.Drawing.Point(140, 224);
            this.lblKyHan.Name = "lblKyHan";
            this.lblKyHan.Size = new System.Drawing.Size(80, 17);
            this.lblKyHan.TabIndex = 14;
            this.lblKyHan.Text = "Kỳ Hạn Gửi";
            this.lblKyHan.Visible = false;
            // 
            // cmbKyHan
            // 
            this.cmbKyHan.FormattingEnabled = true;
            this.cmbKyHan.Location = new System.Drawing.Point(244, 221);
            this.cmbKyHan.Name = "cmbKyHan";
            this.cmbKyHan.Size = new System.Drawing.Size(121, 24);
            this.cmbKyHan.TabIndex = 13;
            this.cmbKyHan.Visible = false;
            this.cmbKyHan.SelectionChangeCommitted += new System.EventHandler(this.cmbKyHan_SelectionChangeCommitted);
            // 
            // lsvDanhSach
            // 
            this.lsvDanhSach.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.lsvDanhSach.FullRowSelect = true;
            this.lsvDanhSach.GridLines = true;
            this.lsvDanhSach.Location = new System.Drawing.Point(0, 379);
            this.lsvDanhSach.Name = "lsvDanhSach";
            this.lsvDanhSach.Size = new System.Drawing.Size(1400, 264);
            this.lsvDanhSach.TabIndex = 15;
            this.lsvDanhSach.UseCompatibleStateImageBehavior = false;
            this.lsvDanhSach.View = System.Windows.Forms.View.Details;
            // 
            // lblLaiSuat
            // 
            this.lblLaiSuat.AutoSize = true;
            this.lblLaiSuat.Location = new System.Drawing.Point(429, 224);
            this.lblLaiSuat.Name = "lblLaiSuat";
            this.lblLaiSuat.Size = new System.Drawing.Size(60, 17);
            this.lblLaiSuat.TabIndex = 16;
            this.lblLaiSuat.Text = "Lãi Suất";
            // 
            // btnThem
            // 
            this.btnThem.Location = new System.Drawing.Point(27, 302);
            this.btnThem.Name = "btnThem";
            this.btnThem.Size = new System.Drawing.Size(109, 40);
            this.btnThem.TabIndex = 17;
            this.btnThem.Text = "Thêm";
            this.btnThem.UseVisualStyleBackColor = true;
            this.btnThem.Click += new System.EventHandler(this.btnThem_Click);
            // 
            // btnXoa
            // 
            this.btnXoa.Location = new System.Drawing.Point(170, 302);
            this.btnXoa.Name = "btnXoa";
            this.btnXoa.Size = new System.Drawing.Size(109, 40);
            this.btnXoa.TabIndex = 18;
            this.btnXoa.Text = "Xóa";
            this.btnXoa.UseVisualStyleBackColor = true;
            this.btnXoa.Click += new System.EventHandler(this.btnXoa_Click);
            // 
            // btnSua
            // 
            this.btnSua.Location = new System.Drawing.Point(320, 302);
            this.btnSua.Name = "btnSua";
            this.btnSua.Size = new System.Drawing.Size(109, 40);
            this.btnSua.TabIndex = 19;
            this.btnSua.Text = "Sửa";
            this.btnSua.UseVisualStyleBackColor = true;
            this.btnSua.Click += new System.EventHandler(this.btnSua_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(480, 103);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(48, 17);
            this.label5.TabIndex = 21;
            this.label5.Text = "Mã Sổ";
            // 
            // txtMaSo
            // 
            this.txtMaSo.Location = new System.Drawing.Point(580, 98);
            this.txtMaSo.Name = "txtMaSo";
            this.txtMaSo.Size = new System.Drawing.Size(100, 22);
            this.txtMaSo.TabIndex = 20;
            // 
            // btnTimKiem
            // 
            this.btnTimKiem.Location = new System.Drawing.Point(467, 302);
            this.btnTimKiem.Name = "btnTimKiem";
            this.btnTimKiem.Size = new System.Drawing.Size(109, 40);
            this.btnTimKiem.TabIndex = 22;
            this.btnTimKiem.Text = "Tìm Kiếm";
            this.btnTimKiem.UseVisualStyleBackColor = true;
            this.btnTimKiem.Click += new System.EventHandler(this.btnTimKiem_Click);
            // 
            // btnXemTienLai
            // 
            this.btnXemTienLai.Location = new System.Drawing.Point(620, 302);
            this.btnXemTienLai.Name = "btnXemTienLai";
            this.btnXemTienLai.Size = new System.Drawing.Size(109, 40);
            this.btnXemTienLai.TabIndex = 23;
            this.btnXemTienLai.Text = "Xem Tiền Lãi";
            this.btnXemTienLai.UseVisualStyleBackColor = true;
            this.btnXemTienLai.Click += new System.EventHandler(this.btnXemTienLai_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1400, 643);
            this.Controls.Add(this.btnXemTienLai);
            this.Controls.Add(this.btnTimKiem);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.txtMaSo);
            this.Controls.Add(this.btnSua);
            this.Controls.Add(this.btnXoa);
            this.Controls.Add(this.btnThem);
            this.Controls.Add(this.lblLaiSuat);
            this.Controls.Add(this.lsvDanhSach);
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
            this.Name = "Form1";
            this.Text = "Form Chính";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtCMND;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtHoTen;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtSoTienGui;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.DateTimePicker dtpNgayLapSo;
        private System.Windows.Forms.RadioButton rdbSoCoKyHan;
        private System.Windows.Forms.RadioButton rdbKhongKyHan;
        private System.Windows.Forms.Label lblKyHan;
        private System.Windows.Forms.ComboBox cmbKyHan;
        private System.Windows.Forms.ListView lsvDanhSach;
        private System.Windows.Forms.Label lblLaiSuat;
        private System.Windows.Forms.Button btnThem;
        private System.Windows.Forms.Button btnXoa;
        private System.Windows.Forms.Button btnSua;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtMaSo;
        private System.Windows.Forms.Button btnTimKiem;
        private System.Windows.Forms.Button btnXemTienLai;
    }
}

