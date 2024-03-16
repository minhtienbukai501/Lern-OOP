using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Quan_Ly_Lop_Hoc
{
    class SinhVienKhuyetTat : SinhVien
    {
        const double GIAMGIA = 0.8; // 80%

        private double TyLeThuongTat; // 0% -> 100%
        private string LoaiThuongTat;

        public override void Nhap()
        {
            base.Nhap(); // gọi lại Nhập của cha

            
            do
            {
                Console.Write("\nNhap vao ty le thuong tat: ");
                TyLeThuongTat = double.Parse(Console.ReadLine());

                if (TyLeThuongTat < 0 || TyLeThuongTat > 100)
                {
                    Console.Write("\nTy le thuong tat khong hop le. Xin kiem tra lai !");
                }
            } while (TyLeThuongTat < 0 || TyLeThuongTat > 100);

            Console.Write("\nNhap vao loai thuong tat");
            LoaiThuongTat = Console.ReadLine();
        }

        public override void Xuat()
        {
            base.Xuat(); // gọi xuất của cha.

            Console.Write("\nTy le thuong tat: " + TyLeThuongTat);
            Console.Write("\nLoai thuong tat: " + LoaiThuongTat);
            Console.Write("\nTien hoc phi phai dong la: " + TinhTienHocPhi());
        }

        public override double TinhTienHocPhi()
        {
            return (1 - GIAMGIA) * HOCPHITHUONG;
        }
    }
}
