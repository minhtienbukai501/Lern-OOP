using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test_Try_Catch
{
    class Program
    {
        static void Main(string[] args)
        {
            int x;
            sondeptrai:
            try
            {
                Console.Write("\nNhap x = ");
                x = int.Parse(Console.ReadLine());
            }
            catch
            {
                Console.Write("Kieu du lieu khong hop le ! Xin nhap lai !");
                goto sondeptrai;
            }
            

            Console.Write("\nx = {0}", x);

            Console.ReadKey(); // system("pause");
        }
    }
}
