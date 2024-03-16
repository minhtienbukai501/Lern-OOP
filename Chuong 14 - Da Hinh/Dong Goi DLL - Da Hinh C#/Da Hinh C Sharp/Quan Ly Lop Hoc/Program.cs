using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Quan_Ly_Lop_Hoc
{
    class Program
    {
        static void Main(string[] args)
        {
            LopHoc lh = new LopHoc();
            lh.Nhap();
            lh.Xuat();

            Console.ReadKey();
        }
    }
}
