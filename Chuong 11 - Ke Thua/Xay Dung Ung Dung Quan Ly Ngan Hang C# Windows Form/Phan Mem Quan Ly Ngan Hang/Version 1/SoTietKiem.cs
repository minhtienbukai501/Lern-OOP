using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Version_1
{
    class SoTietKiem
    {
        protected string MaSo;

        public string _MASO
        {
            get { return MaSo; }
            set { MaSo = value; }
        }
        protected string CMND, HoTen;

        public string _HoTen
        {
            get { return HoTen; }
            set { HoTen = value; }
        }

        public string _CMND
        {
            get { return CMND; }
            set { CMND = value; }
        }
        protected double SoTienGui, LaiSuat;

        public double _LaiSuat
        {
            get { return LaiSuat; }
            set { LaiSuat = value; }
        }

        public double _SoTienGui
        {
            get { return SoTienGui; }
            set { SoTienGui = value; }
        }
        private DateTime NgayLapSo;

        public DateTime _NgayLapSo
        {
            get { return NgayLapSo; }
            set { NgayLapSo = value; }
        }

        

        public SoTietKiem()
        {
           MaSo = CMND = HoTen = "";
            SoTienGui = LaiSuat = 0;
        }

        public SoTietKiem(string maso, string cmnd, string hoten, double sotiengui, double laisuat, DateTime ngay)
        {
            this.MaSo = maso;
            this.CMND = cmnd;
            this.HoTen = hoten;
            this.SoTienGui = sotiengui;
            this.LaiSuat = laisuat;
            this.NgayLapSo = ngay;
        }

        public SoTietKiem(SoTietKiem stk)
        {
            this.MaSo = stk.MaSo;
            this.CMND = stk.CMND;
            this.HoTen = stk.HoTen;
            this.SoTienGui = stk.SoTienGui;
            this.LaiSuat = stk.LaiSuat;
            this.NgayLapSo = stk.NgayLapSo;
        }
    }
}
