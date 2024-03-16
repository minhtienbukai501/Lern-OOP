using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SonDepTrai
{
    public class SinhVien
    {
        private static double Diem;

        public static double DIEM
        {
            get { return SinhVien.Diem; }
            set { SinhVien.Diem = value; }
        }

        public static string XepLoai()
        {
            if (Diem >= 5)
            {
                return "ĐẬU";
            }
            return "XÉM ĐẬU";
        }
    }
}
