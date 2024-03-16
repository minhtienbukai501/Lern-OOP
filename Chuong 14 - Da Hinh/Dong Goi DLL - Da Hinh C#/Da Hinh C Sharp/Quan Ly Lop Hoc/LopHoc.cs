using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Quan_Ly_Lop_Hoc
{
    class LopHoc
    {
        private List<SinhVien> DanhSachLop = new List<SinhVien>();

        public void Nhap()
        {

            int luachon = 0;
            do{
                Console.Write("\n-------------- Menu --------------\n");
                Console.Write("\n1. Sinh vien thuong");
                Console.Write("\n2. Sinh vien ngheo");
                Console.Write("\n3. Sinh vien khuyet tat");
                Console.Write("\n0. Thoat");
                Console.Write("\n----------------------------------\n");

                do{
                    Console.Write("\nNhap vao loai sinh vien: ");
                    luachon = int.Parse(Console.ReadLine());

                    if (luachon < 0 || luachon > 3)
                    {
                        Console.Write("\nLua chon khong hop le. Xin kiem tra lai !");
                    }
                }while(luachon < 0 || luachon > 3);

                SinhVien sv = null;

                if (luachon == 1)
                {
                    sv = new SinhVien(); // sinh viên thường.
                }
                else if (luachon == 2)
                {
                    sv = new SinhVienNgheo(); // sinh viên nghèo
                }
                else if (luachon == 3)
                {
                    sv = new SinhVienKhuyetTat(); // sinh vien khuyet tat
                }


                if (luachon != 0)
                {
                    sv.Nhap();
                    DanhSachLop.Add(sv);
                }
            }while(luachon != 0);
        }

        public void Xuat()
        {
            int soluong = DanhSachLop.Count();
            for (int i = 0; i < soluong; i++)
            {
                Console.Write("\n--------------- Thong Tin Sinh Vien Thu " + (i + 1) + " -----------\n");
                
                if (DanhSachLop[i] is SinhVienNgheo)
                {
                    Console.Write("\nSinh Vien Ngheo");
                }
                else if (DanhSachLop[i] is SinhVienKhuyetTat)
                {
                    Console.Write("\nSinh Vien Khuyet Tat");
                }
                else
                {
                    Console.Write("\nSinh Vien Thuong");
                }

                DanhSachLop[i].Xuat();
            }

            //foreach (SinhVien item in DanhSachLop)
            //{
            //    item.Xuat();
            //}
        }

        public double TinhTongTien()
        {
            double Tong = 0;
            int soluong = DanhSachLop.Count();

            for (int i = 0; i < soluong; i++)
            {
                Tong += DanhSachLop[i].TinhTienHocPhi();
            }
            return Tong;
        }
    }
}
