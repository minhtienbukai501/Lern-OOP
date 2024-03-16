using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Version_1
{
    class SoTietKiemCoKyHan : SoTietKiem
    {
        private int KyHan;

        public int _KyHan
        {
            get { return KyHan; }
            set { KyHan = value; }
        }

        public SoTietKiemCoKyHan() : base()
        {
            KyHan = 0;
        }

        public SoTietKiemCoKyHan(string maso, string cmnd, string hoten, double sotiengui, double laisuat, DateTime ngay, int kyhan)
            :base(maso, cmnd, hoten, sotiengui, laisuat, ngay)
        {
            this.KyHan = kyhan;
        }

        public SoTietKiemCoKyHan(SoTietKiemCoKyHan stkcokyhan) : base((SoTietKiem)stkcokyhan)
        {
            this.KyHan = stkcokyhan.KyHan;
        }

        public double TinhTienLoi(int n) // n là số tháng gửi
        {
            if (n >= KyHan)
            {
                return SoTienGui * LaiSuat * n;
            }
            return 0;
        }
    }
}
