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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public static string static_Ten, static_CNMD, static_MaSo;

        string laisuat, kyhan; // thực ra chính là lãi suất
        public static NganHang nganhang = new NganHang();

        private void rdbSoCoKyHan_CheckedChanged(object sender, EventArgs e)
        {
            lblKyHan.Visible = true;
            cmbKyHan.Visible = true;
       
            //lblLaiSuat.Text = "Lãi Suất = 1%";
        }

        private void rdbKhongKyHan_CheckedChanged(object sender, EventArgs e)
        {
            lblKyHan.Visible = false;
            cmbKyHan.Visible = false;
            laisuat = "1";
            lblLaiSuat.Text = "Lãi Suất = " + laisuat + "%";
            kyhan = "Không Kỳ Hạn";
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            cmbKyHan.Items.Add("3 thang => 3%");
            cmbKyHan.Items.Add("6 thang => 3.5%");
            cmbKyHan.Items.Add("9 thang => 4%");
            cmbKyHan.Items.Add("12 thang => 4.5%");
            cmbKyHan.Items.Add("24 thang => 5%");

            cmbKyHan.SelectedIndex = 0; // Mặc định chọn cái đầu

            // Tạo các cột trong ListView
            lsvDanhSach.Columns.Add("STT", 140);
            lsvDanhSach.Columns.Add("Mã Sổ", 140);
            lsvDanhSach.Columns.Add("CMND", 140);
            lsvDanhSach.Columns.Add("Họ Tên", 140);
            lsvDanhSach.Columns.Add("Số Tiền Gửi", 140);
            lsvDanhSach.Columns.Add("Ngày Lập Sổ", 140);
            lsvDanhSach.Columns.Add("Lãi Suất", 140);
            lsvDanhSach.Columns.Add("Kỳ Hạn", 140);
        }
        
        private void cmbKyHan_SelectionChangeCommitted(object sender, EventArgs e)
        {
            kyhan = ""; // reset kỳ hạn

            laisuat = cmbKyHan.SelectedItem.ToString();

            // Đang tìm ra lãi suất.
            int start = 0;
            int length = laisuat.Length;
            for (int i = 0; i < length; i++)
            {
                if (laisuat[i] == '>')
                {
                    start = i;
                    break;
                }
            }
            laisuat = cmbKyHan.SelectedItem.ToString().Substring(start + 2);
            laisuat = laisuat.Remove(laisuat.Length - 1);
            //MessageBox.Show(chuoi);
            lblLaiSuat.Text = "Lãi Suất = " + laisuat + "%";

            // Đang tìm ra kỳ hạn
            for (int i = 0; i < cmbKyHan.SelectedItem.ToString().Length; i++)
            {
                if (cmbKyHan.SelectedItem.ToString()[i] == ' ')
                {
                    break;
                }
                kyhan += cmbKyHan.SelectedItem.ToString()[i];
            }
            
            //MessageBox.Show("kỳ hạn = " + kyhan);
        }

        int dem = 1;

        private void btnThem_Click(object sender, EventArgs e)
        {
            bool Check = nganhang.KiemTraBiTrung(txtCMND.Text, txtHoTen.Text);
            bool Check_1 = nganhang.KiemTraMaSoBiTrung(txtMaSo.Text);

            if (Check == false)
            {
                MessageBox.Show("Thông tin người dùng bị trùng");
            }
            else if (Check_1 == false)
            {
                MessageBox.Show("Mã sổ đã bị trùng");
            }
            else
            {
                // Truyền dữ liệu về cho class rồi từ đó add dữ liệu vào ngân hàng

                // đang chọn sổ không kỳ hạn
                if (rdbKhongKyHan.Checked == true)
                {
                    SoTietKiemKhongKyHan sokhongkyhan = new SoTietKiemKhongKyHan(txtMaSo.Text, txtCMND.Text,
                        txtHoTen.Text, double.Parse(txtSoTienGui.Text),
                        double.Parse(laisuat), dtpNgayLapSo.Value);

                    nganhang._ListSoKhongKyHan.Add(sokhongkyhan);

              
                }
                else // đang chọn sổ có kỳ hạn
                {
                    SoTietKiemCoKyHan socokyhan = new SoTietKiemCoKyHan(txtMaSo.Text, txtCMND.Text,
                        txtHoTen.Text, double.Parse(txtSoTienGui.Text),
                        double.Parse(laisuat), dtpNgayLapSo.Value, int.Parse(kyhan));

                    nganhang._ListSoCoKyHan.Add(socokyhan);

                    kyhan += " thang";
                }

                // đổ dữ liệu sổ đang nhập trên Form về ListView
                string[] arr = new string[8];

                arr[0] = (dem++).ToString();
                arr[1] = txtMaSo.Text;
                arr[2] = txtCMND.Text;
                arr[3] = txtHoTen.Text;
                arr[4] = txtSoTienGui.Text;
                arr[5] = dtpNgayLapSo.Value.ToString("dd/MM/yyyy");
                arr[6] = laisuat + "%";
                arr[7] = kyhan;

                ListViewItem item = new ListViewItem(arr);
                lsvDanhSach.Items.Add(item);

            }
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            /* 
             B1: Xóa sổ đó trong ngân hàng
             B2: Xóa trên ListView
             B3: Cập nhật lại STT trên ListView
             */

            // Bước 1: Xóa sổ trong ngân hàng
            nganhang.XoaSo(txtMaSo.Text);

            // Bước 2: Xóa trên ListView
            // làm sao biết người dùng đang chọn dòng nào để xóa

            if (lsvDanhSach.Items.Count == 0)
            {
                MessageBox.Show("Còn dòng nào nữa đâu mà xóa");
            }
            else
            {
                int index;
                index = lsvDanhSach.Items.IndexOf(lsvDanhSach.SelectedItems[0]);
                lsvDanhSach.Items.RemoveAt(index);

                // B3: Cập nhật lại STT trên ListView
                for (int i = index; i < lsvDanhSach.Items.Count; i++)
                {
                    lsvDanhSach.Items[i].SubItems[0].Text = (i + 1).ToString();
                }
            }
            

        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            /* 
             B1: Đổ dữ liệu từ Form ban đầu sang Form cập nhật
             B2: Sau khi Form cập nhật đã làm xong hết thì xác nhận lại lần cuối bằng cách: Bấm vào nút Cập Nhật
             B3: Sau khi bấm vào nút cập nhật thì Form cập nhật tự động tắt và dữ liệu được truyền về Form ban đầu
             B4: Kiểm tra dữ liệu cập nhật ngay ở Form cập nhật.
             B5: Cập nhật dữ liệu mới trên ngân hàng
             B6: Cập nhật trên ListView
             */

            int index = lsvDanhSach.Items.IndexOf(lsvDanhSach.SelectedItems[0]);
               

            frmCapNhat frm = new frmCapNhat();
            frm.MaSo = lsvDanhSach.Items[index].SubItems[1].Text; // đưa sang bên kia
            frm.CMND = lsvDanhSach.Items[index].SubItems[2].Text;
            frm.HoTen = lsvDanhSach.Items[index].SubItems[3].Text;
            frm.SoTienGui = lsvDanhSach.Items[index].SubItems[4].Text;

            // frm.NgayLapSo = ...
            frm.LaiSuat = lsvDanhSach.Items[index].SubItems[6].Text;
            frm.KyHan = lsvDanhSach.Items[index].SubItems[7].Text;
            frm.ShowDialog();

            
            // Bước cuối cùng: Cập nhật lại trên ListView
            lsvDanhSach.Items[index].SubItems[2].Text = static_CNMD;
            lsvDanhSach.Items[index].SubItems[3].Text = static_Ten;

            

            
        }
        public static string cmnd_timkiem;

        private void btnTimKiem_Click(object sender, EventArgs e)
        {
            // cho ListView trở về như ban đầu
            for (int i = 0; i < lsvDanhSach.Items.Count; i++)
            {
                
                    lsvDanhSach.Items[i].BackColor = Color.White;

                
            }

            FormTimKiem frmTimKiem = new FormTimKiem();
            frmTimKiem.ShowDialog();

            // khi mà FormTimKiem đóng lại thì sẽ chạy từ dòng này trở xuống

            // Duyệt qua danh sách ListView đang có và tìm ra các dòng có CMND trùng thì tô màu đỏ
            for (int i = 0; i < lsvDanhSach.Items.Count; i++)
            {
                if (lsvDanhSach.Items[i].SubItems[2].Text == cmnd_timkiem)
                {
                    lsvDanhSach.Items[i].BackColor = Color.Red;
                    
                }
            }
        }

        private void btnXemTienLai_Click(object sender, EventArgs e)
        {
            // Tìm ra xem kể từ ngày gửi tiền cho đến ngày hiện tại (lấy từ hệ thống máy tính) xem đã trải qua bao nhiêu tháng

            // cách lấy giờ từ hệ thống máy tính

            // Làm sao tìm ra n là số tháng gửi
            // n = ngày hiện tại lấy từ máy tính - ngày gửi

            int index = lsvDanhSach.Items.IndexOf(lsvDanhSach.SelectedItems[0]);

            //int n = DateTime.Now - nganhang.TimNgayLapSoCuaSoDangTimKiem(lsvDanhSach.Items[index].SubItems[1].Text);
            // quy n ra tháng rồi từ đó lồng vào 2 hàm tính tiền đã có sẵn
            // đi vào ngân hàng duyệt qua các loại sổ đang có rồi thấy sổ nào có mã trùng thì lấy đối tượng đó gọi tới hàm tính tiền rồi break ra.
                
        }
    }
}
