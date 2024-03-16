using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Quan_Ly_Thue_Xe
{
    class Xe
    {
        protected string HoTenNguoiThue;
        protected double SoGioThue;

        public void Nhap()
        {
            Console.Write("\nNhap vao ho ten nguoi thue xe: ");
            HoTenNguoiThue = Console.ReadLine();

            Console.Write("\nNhap vao so gio thue xe: ");
            SoGioThue = double.Parse(Console.ReadLine());
        }

        public void Xuat()
        {
            Console.Write("\nHo ten nguoi thue xe: " + this.HoTenNguoiThue);
            Console.Write("\nSo gio thue xe: " + this.SoGioThue);
          
        }
    }

    class XeDap : Xe
    {
        public double TinhTienThueXe()
        {
            return 10000 + (SoGioThue - 1) * 8000;
        }
    }

    class XeMay : Xe
    {
        private string BienSo;
        private int loaixe;

        public int LOAIXE
        {
            get { return loaixe; }
            set { loaixe = value; }
        }

        public void Nhap()
        {
            base.Nhap(); // Goi lai Nhap cua cha

            Console.Write("\nNhap vao bien so xe: ");
            BienSo = Console.ReadLine();

            Console.Write("\n------------ Loai Xe ------------\n");
            Console.Write("\n1. Xe 100 phan khoi");
            Console.Write("\n2. Xe 250 phan khoi");
            Console.Write("\n---------------------------------\n");

            Console.Write("\nHay nhap vao lua chon cua ban: ");
            this.loaixe = int.Parse(Console.ReadLine());
        }

        public void Xuat()
        {
            base.Xuat(); // goi Xuat cua cha
            Console.Write("\nBien so xe: " + this.BienSo);
            Console.Write("\nLoai xe: ");
            if(this.loaixe == 1) 
            {
                Console.Write("100 phan khoi");
            }
            else
            {
                Console.Write("250 phan khoi");
            }
        }

        public double TinhTienThueXe()
        {
            double tongtien = 0;

            if (loaixe == 1)
            {
                tongtien += 150000;
            }
            else
            {
                tongtien += 200000;
            }
            return tongtien + (SoGioThue - 1) * 100000;
        }
    }

    class CuaHang
    {
        private List<XeDap> ListXeDap = new List<XeDap>();
        private List<XeMay> ListXeMay = new List<XeMay>();

        public void Nhap()
        {
sondeptrai:
            Console.Write("\n--------------- Menu ---------------\n");
            Console.Write("\n1. Nhap xe dap");
            Console.Write("\n2. Nhap xe may");
            Console.Write("\n0. Thoat");
            Console.Write("\n------------------------------------\n");

            int luachon;
            Console.Write("\nNhap vao lua chon cua ban: ");
            luachon = int.Parse(Console.ReadLine());

            if (luachon == 1)
            {
                XeDap x = new XeDap();
                x.Nhap();
                ListXeDap.Add(x);
            }
            else if (luachon == 2)
            {
                XeMay x = new XeMay();
                x.Nhap();
                ListXeMay.Add(x);
            }
            
            if (luachon != 0)
            {
                goto sondeptrai;
            }

        }

        public void Xuat()
        {
            foreach (XeDap item in ListXeDap)
            {
                item.Xuat();
            }

            foreach (XeMay item in ListXeMay)
            {
                item.Xuat();
            }
        }

        public double TinhTongTien()
        {
            double tong = 0;
            foreach (XeDap item in ListXeDap)
            {
                tong += item.TinhTienThueXe();
            }

            foreach (XeMay item in ListXeMay)
            {
                tong += item.TinhTienThueXe();
            }
            return tong;
        }

        public void XuatThongTinXeDap()
        {
            foreach (XeDap item in ListXeDap)
            {
                item.Xuat();
            }
        }

        public double TinhTongTienThueXeMay250cc()
        {
            double tong = 0;
            foreach (XeMay item in ListXeMay)
            {
                if (item.LOAIXE == 2)
                {
                    tong += item.TinhTienThueXe();
                }
            }
            return tong;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            XeMay x = new XeMay();
            x.Nhap();
            x.Xuat();
            double sotien = x.TinhTienThueXe();

            Console.Write("\nTien thue xe = " + sotien);

            Console.ReadKey();
        }
    }
}
