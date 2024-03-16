using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Quan_Ly_Lop_Hoc
{
    
    class SinhVien
    {
        protected const double HOCPHITHUONG = 3000000;

        protected string CMND, HoTen, Email, SoDienThoai, CamNghi;
        protected int KhoaHoc; // 1: KTLT, 2:HĐT

        public SinhVien()
        {
            CMND = HoTen = Email = SoDienThoai = CamNghi = "";
            KhoaHoc = 1;
        }

        public virtual void Nhap()
        {
            Console.Write("\nNhap CMND: ");
            CMND = Console.ReadLine();

            Console.Write("\nNhap Ho Ten: ");
            HoTen = Console.ReadLine();

            Console.Write("\nNhap EMail: ");
            Email = Console.ReadLine();

            Console.Write("\nNhap So dien thoai: ");
            SoDienThoai = Console.ReadLine();

            Console.Write("\nNhap cam nghi: ");
            CamNghi = Console.ReadLine();

            do
            {

                Console.Write("\n----------------- Menu -----------------\n");
                Console.Write("\n1. Ky Thuat Lap Trinh C/C++");
                Console.Write("\n2. Lap Trinh Huong Doi Tuong C++/C#");
                Console.Write("\n----------------------------------------\n");

                Console.Write("\nChon khoa hoc cua ban: ");
                KhoaHoc = int.Parse(Console.ReadLine());

                if (KhoaHoc != 1 && KhoaHoc != 2)
                {
                    Console.Write("\nKhoa hoc khong hop le. Xin kiem tra lai !");
                }
            } while (KhoaHoc != 1 && KhoaHoc != 2);
            
        }

        public virtual void Xuat()
        {
            Console.Write("\nCMND: {0}", CMND);
            Console.Write("\nHo ten: " + HoTen);
            Console.Write("\nEMail: " + Email);
            Console.Write("\nSo dien thoai: " + SoDienThoai);
            Console.Write("\nCam nghi: " + CamNghi);

            if (KhoaHoc == 1)
            {
                Console.Write("\nBan da chon khoa Ky Thuat Lap Trinh C/C++");
            }
            else if (KhoaHoc == 2)
            {
                Console.Write("\nBan da chon khoa Lap Trinh Huong Doi Tuong C++/C#");
            }
            Console.Write("\nTien hoc phi phai dong la: " + TinhTienHocPhi());
        }

        public virtual double TinhTienHocPhi()
        {
            return HOCPHITHUONG;
        }
    }
}
