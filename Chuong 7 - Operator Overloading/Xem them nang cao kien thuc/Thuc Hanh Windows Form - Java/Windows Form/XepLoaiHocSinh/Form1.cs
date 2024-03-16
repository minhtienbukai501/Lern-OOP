using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace XepLoaiHocSinh
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnXuLy_Click(object sender, EventArgs e)
        {
            try
            {
                HocSinh hs = new HocSinh(txtMaSo.Text,
                    txtHoTen.Text, double.Parse(txtDiemToan.Text),
                    double.Parse(txtDiemLy.Text),
                    double.Parse(txtDiemHoa.Text));

                bool Check = true;

                if (hs.TOAN < 0 || hs.TOAN > 10)
                {
                    Check = false;
                    MessageBox.Show("Điểm toán không hợp lệ", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    txtDiemToan.Clear(); // Xóa hết.
                    txtDiemToan.Focus(); // Cho con trỏ nhảy lại.
                }

                if (hs.LY < 0 || hs.LY > 10)
                {
                    Check = false;
                    MessageBox.Show("Điểm lý không hợp lệ", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    txtDiemLy.Clear(); // Xóa hết.
                    txtDiemLy.Focus(); // Cho con trỏ nhảy lại.
                }

                if (hs.HOA < 0 || hs.HOA > 10)
                {
                    Check = false;
                    MessageBox.Show("Điểm hóa không hợp lệ", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    txtDiemHoa.Clear(); // Xóa hết.
                    txtDiemHoa.Focus(); // Cho con trỏ nhảy lại.
                }

                if (Check == true)
                {
                    txtTrungBinh.Text = hs.TinhDiemTrungBinh().ToString();
                    lblXepLoai.Text = "Xếp loại: " + hs.XepLoai();
                }
            }
            catch
            {
                MessageBox.Show("Bị lỗi rồi kìa", "Lỗi");
            }

            
        }
    }
}
