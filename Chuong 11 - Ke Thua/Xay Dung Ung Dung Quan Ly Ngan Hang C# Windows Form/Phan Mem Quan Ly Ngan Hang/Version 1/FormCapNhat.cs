using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Version_1
{
    public partial class frmCapNhat : Form
    {
        public frmCapNhat()
        {
            InitializeComponent();
        }

        public string MaSo, CMND, HoTen, LaiSuat, KyHan, SoTienGui; // túi chứa
        
        public DateTimePicker NgayLapSo;

       

        SoTietKiemCoKyHan socokyhan = new SoTietKiemCoKyHan();
        SoTietKiemKhongKyHan sokhongkyhan = new SoTietKiemKhongKyHan();

        private void frmCapNhat_Load(object sender, EventArgs e)
        {
            cmbKyHan.Items.Add("3 thang => 3%");
            cmbKyHan.Items.Add("6 thang => 3.5%");
            cmbKyHan.Items.Add("9 thang => 4%");
            cmbKyHan.Items.Add("12 thang => 4.5%");
            cmbKyHan.Items.Add("24 thang => 5%");

            cmbKyHan.SelectedIndex = 0; // Mặc định chọn cái đầu

            txtMaSo.Text = MaSo;
            txtMaSo.Enabled = false; // ẩn đi

            txtCMND.Text = CMND;
            txtHoTen.Text = HoTen;

            if (KyHan == "Không Kỳ Hạn")
            {
                rdbKhongKyHan.Checked = true;
            }
            else
            {
                rdbSoCoKyHan.Checked = true;
            }

            // ẩn comboBox đi.
            if (rdbSoCoKyHan.Checked == false)
            {
                cmbKyHan.Enabled = false;
            }

            // 9 tháng => ?%
            for (int i = 0; i < cmbKyHan.Items.Count; i++)
            {
                int idx = 0;
                string str = cmbKyHan.Items[i].ToString();
                for (int j = 0; j < str.Length; j++)
                {
                    if (str[j] == '=')
                    {
                        idx = j - 1;
                    }

                }
                str = str.Substring(0, idx);
                //MessageBox.Show("a" + str.Substring(0, idx) + "a");
                if (KyHan == str)
                {
                    cmbKyHan.SelectedIndex = i;

                    break;
                }
            }

            // lấy ra đúng kỳ hạn
            int vt = 0;
            for (int i = 0; i < KyHan.Length; i++)
            {
                if (KyHan[i] == ' ')
                {
                    vt = i;
                    break;
                }
            }

            KyHan = KyHan.Substring(0, vt);

            //MessageBox.Show("kỳ hạn = " + KyHan);
            LaiSuat = LaiSuat.Remove(LaiSuat.Length - 1, 1); // xóa %
            MessageBox.Show("Lãi suất = " + LaiSuat);

           txtSoTienGui.Text = SoTienGui;

            // Khoan làm ngày lập sổ

        }

        private void rdbSoCoKyHan_CheckedChanged_1(object sender, EventArgs e)
        {
            lblKyHan.Visible = true;
            cmbKyHan.Visible = true;

            //lblLaiSuat.Text = "Lãi Suất = 1%";

           
        }

        private void rdbKhongKyHan_CheckedChanged_1(object sender, EventArgs e)
        {
            lblKyHan.Visible = false;
            cmbKyHan.Visible = false;
            LaiSuat = "1";
            lblLaiSuat.Text = "Lãi Suất = " + LaiSuat + "%";
            
        }

        private void btnCapNhat_Click(object sender, EventArgs e)
        {
            
            Form1.static_Ten = txtHoTen.Text;
            Form1.static_CNMD = txtCMND.Text;
            Form1.static_MaSo = txtMaSo.Text;

            bool Check = Form1.nganhang.KiemTraDuLieuTruyenVe(txtMaSo.Text, txtCMND.Text, txtHoTen.Text);

            // vấn đề đang gặp là vd: trong ngân hàng có 2 - Sơn, mình lại cập nhật là: 2 - Phúc => trùng CMND nhưng khác tên => báo lỗi
            // => giải pháp: xây dựng 1 hàm kiểm tra riêng, trong đó không xét lại đối tượng sổ mà có mã sổ bị trùng

            if (Check == false)
            {
                MessageBox.Show("Đã bị trùng tên với loại sổ khác");
            }
            else
            {
               
                // Tìm ra sổ có mã tương ứng rồi cập nhật lại thông tin cho nó trên ngân hàng

                // duyệt qua danh sách sổ có kỳ hạn

                for (int i = 0; i < Form1.nganhang._ListSoCoKyHan.Count(); i++)
                {
                    if (Form1.nganhang._ListSoCoKyHan[i]._MASO == txtMaSo.Text)
                    {
                        Form1.nganhang._ListSoCoKyHan[i]._CMND = txtCMND.Text;
                        Form1.nganhang._ListSoCoKyHan[i]._HoTen = txtHoTen.Text;
                        Form1.nganhang._ListSoCoKyHan[i]._SoTienGui = double.Parse(txtSoTienGui.Text);
                        Form1.nganhang._ListSoCoKyHan[i]._KyHan = int.Parse(KyHan);
                        Form1.nganhang._ListSoCoKyHan[i]._LaiSuat = double.Parse(LaiSuat);
                        Form1.nganhang._ListSoCoKyHan[i]._NgayLapSo = dtpNgayLapSo.Value;
                    }
                }

                    // duyệt qua danh sách sổ không kỳ hạn (về nhà làm)





                    this.Close(); // Đóng Form lại.
            }
            
        }

        private void cmbKyHan_SelectionChangeCommitted(object sender, EventArgs e)
        {
            KyHan = ""; // reset kỳ hạn

            LaiSuat = cmbKyHan.SelectedItem.ToString();

            // Đang tìm ra lãi suất.
            int start = 0;
            int length = LaiSuat.Length;
            for (int i = 0; i < length; i++)
            {
                if (LaiSuat[i] == '>')
                {
                    start = i;
                    break;
                }
            }
            LaiSuat = cmbKyHan.SelectedItem.ToString().Substring(start + 2);
            LaiSuat = LaiSuat.Remove(LaiSuat.Length - 1);
            //MessageBox.Show(chuoi);
            lblLaiSuat.Text = "Lãi Suất = " + LaiSuat + "%";

            // Đang tìm ra kỳ hạn
            for (int i = 0; i < cmbKyHan.SelectedItem.ToString().Length; i++)
            {
                if (cmbKyHan.SelectedItem.ToString()[i] == ' ')
                {
                    break;
                }
                KyHan += cmbKyHan.SelectedItem.ToString()[i];
            }

            MessageBox.Show("kỳ hạn = " + KyHan);
        }
    }
}
