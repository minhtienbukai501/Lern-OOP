using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace XepLoaiHocSinh
{
    class HocSinh
    {
        private string MaSo, HoTen;
        private double DiemToan, DiemLy, DiemHoa;

        public double HOA
        {
            get { return DiemHoa; }
            set { DiemHoa = value; }
        }

        public double LY
        {
            get { return DiemLy; }
            set { DiemLy = value; }
        }

        public double TOAN
        {
            get { return DiemToan; }
            set { DiemToan = value; }
        }

        public HocSinh(string ms, string ht,
            double toan, double ly, double hoa)
        {
            this.MaSo = ms;
            this.HoTen = ht;
            this.DiemToan = toan;
            this.DiemLy = ly;
            this.DiemHoa = hoa;
        }

        public double TinhDiemTrungBinh()
        {
            return (DiemToan + DiemLy + DiemHoa) / 3;
        }

        public string XepLoai()
        {
            Double Dtb = TinhDiemTrungBinh(); // Gọi lại phương thức để trả ra điểm trung bình.

            if (Dtb < 3.5)
            {
                return "Yeu";
            }

            if (Dtb < 5)
            {
                return "Trung Binh";
            }

            if (Dtb < 7)
            {
                return "Trung Binh Kha";
            }

            if (Dtb < 8)
            {
                return "Kha";
            }

            if (Dtb < 9)
            {
                return "Gioi";
            }
            return "Xuat Sac";
        }
    }
}
