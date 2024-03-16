using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Quan_Ly_Lop_Hoc
{
    class SinhVienNgheo : SinhVien
    {
        const double GIAMGIA = 0.7; // 70%

        private int SoLuongThanhVienGiaDinh;
        private double ThuNhapCaGiaDinhTrungBinhThang;

        public override void Nhap()
        {
            base.Nhap(); // gọi lại Nhập của cha

            do{
                Console.Write("\nNhap vao so luong thanh vien trong gia dinh: ");
                SoLuongThanhVienGiaDinh = int.Parse(Console.ReadLine());

                if (SoLuongThanhVienGiaDinh < 1)
                {
                    Console.Write("\nSo luong thanh vien khong hop le. Xin kiem tra lai !");
                }
            }while(SoLuongThanhVienGiaDinh < 1);

            do{
                Console.Write("\nNhap vao thu nhap ca nhan trong gia dinh moi thang: ");
                ThuNhapCaGiaDinhTrungBinhThang = double.Parse(Console.ReadLine());

                if (ThuNhapCaGiaDinhTrungBinhThang < 0)
                {
                    Console.Write("\nThu nhap ca nhan khong hop le. Xin kiem tra lai !");
                }
            }while(ThuNhapCaGiaDinhTrungBinhThang < 0);
        }

        public override void Xuat()
        {
           base.Xuat(); // gọi xuất của cha.

           Console.Write("\nSo luong thanh vien trong gia dinh: " + SoLuongThanhVienGiaDinh);
           Console.Write("\nThu nhap trung binh cua thang: " + ThuNhapCaGiaDinhTrungBinhThang);
           Console.Write("\nTien hoc phi phai dong la: " + TinhTienHocPhi());
        }

        public override double TinhTienHocPhi()
        {
            return (1 - GIAMGIA) * HOCPHITHUONG;
        }
    }
}
