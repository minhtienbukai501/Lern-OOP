using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Version_1
{
    class SoTietKiemKhongKyHan : SoTietKiem
    {
        public SoTietKiemKhongKyHan() : base()
        {

        }

        public SoTietKiemKhongKyHan(string maso, string cmnd, string hoten, double sotiengui, double laisuat, DateTime ngay)
            :base(maso, cmnd, hoten, sotiengui, laisuat, ngay)
        {

        }

        public SoTietKiemKhongKyHan(SoTietKiemKhongKyHan stkkhongkyhan)
            : base((SoTietKiem)stkkhongkyhan)
        {

        }

        public double TinhTienLoi(int n) // n là số tháng gửi
        {
            return SoTienGui * LaiSuat * n;
        }
    }
}
