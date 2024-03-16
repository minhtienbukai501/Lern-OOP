using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Demo_sơ_lược
{
    // cha
    class HocSinh
    {
        protected string MaSo, HoTen, DiaChi;

        public void Nhap()
        {
            Console.Write("\nNhap vao ma so: ");
            this.MaSo = Console.ReadLine();

            Console.Write("\nNhap vao ho ten: ");
            this.HoTen = Console.ReadLine();

            Console.Write("\nNhap vao dia chi: ");
            this.DiaChi = Console.ReadLine();
        }

        public void Xuat()
        {
            Console.Write("\nMa so: " + this.MaSo);
            Console.Write("\nHo ten: " + this.HoTen);
            Console.Write("\nDia chi: " + this.DiaChi);
        }

        // constructor mặc định
        public HocSinh()
        {
            this.MaSo = "123";
            this.HoTen = "Son dep trai";
            this.DiaChi = "khong biet";
        }

        // constructor tham số
        public HocSinh(string maso, string hoten, string diachi)
        {
            this.MaSo = maso;
            this.HoTen = hoten;
            this.DiaChi = diachi;
        }

        // constructor sao chép
        public HocSinh(HocSinh hs)
        {
            this.MaSo = hs.MaSo;
            this.HoTen = hs.HoTen;
            this.DiaChi = hs.DiaChi;
        }
    }

    // con
    class HocSinhNoiTru : HocSinh
    {
        private int TienNoiTru;

        public new void Nhap()
        {
            // HocSinh::Nhap => C++
            base.Nhap(); // Gọi lại Nhap của cha.
            Console.Write("\nNhap vao tien noi tru: ");
            this.TienNoiTru = int.Parse(Console.ReadLine());
        }

        public new void Xuat()
        {
            base.Xuat(); // gọi Xuat của cha
            Console.Write("\nSo tien noi tru = " + this.TienNoiTru);
        }

        // constructor mặc định
        public HocSinhNoiTru() : base()
        {
            TienNoiTru = 100000;
        }

        // constructor tham số
        public HocSinhNoiTru(string maso, string hoten, string diachi, int sotien)
            :base(maso, hoten, diachi)
        {
            this.TienNoiTru = sotien;
        }
        // cha = con => true
        // con = cha => false

        // constructor sao chép
        public HocSinhNoiTru(HocSinhNoiTru hsnt) : base((HocSinh)hsnt)
        {
            this.TienNoiTru = hsnt.TienNoiTru;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            //HocSinhNoiTru hsnt = new HocSinhNoiTru();
            //hsnt.Nhap();

            HocSinhNoiTru hsnt = new HocSinhNoiTru("abc", "xyz", "dkm", 69000);
            HocSinhNoiTru hsnt2 = new HocSinhNoiTru(hsnt);
            hsnt2.Xuat();

            Console.ReadKey();
        }
    }
}
