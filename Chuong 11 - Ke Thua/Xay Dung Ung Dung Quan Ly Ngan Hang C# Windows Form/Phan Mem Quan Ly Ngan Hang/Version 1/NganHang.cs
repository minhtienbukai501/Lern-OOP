using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Version_1
{
    public class NganHang
    {
        private static List<SoTietKiemCoKyHan> ListSoCoKyHan = new List<SoTietKiemCoKyHan>();

        internal List<SoTietKiemCoKyHan> _ListSoCoKyHan
        {
            get { return ListSoCoKyHan; }
            set { ListSoCoKyHan = value; }
        }
        private static List<SoTietKiemKhongKyHan> ListSoKhongKyHan = new List<SoTietKiemKhongKyHan>();

        internal List<SoTietKiemKhongKyHan> _ListSoKhongKyHan
        {
            get { return ListSoKhongKyHan; }
            set { ListSoKhongKyHan = value; }
        }

        // Kiểm tra mã sổ không được trùng nhau
        public bool KiemTraMaSoBiTrung(string maso)
        {
            // kiểm tra qua danh sách tất cả 2 loại sổ đang có
            int soluong_cokyhan = ListSoCoKyHan.Count();
            int soluong_khongkyhan = ListSoKhongKyHan.Count();

            for (int i = 0; i < soluong_cokyhan; i++)
            {
                if (ListSoCoKyHan[i]._MASO == maso)
                {
                    return false; // bị trùng.
                }
            }

            for (int i = 0; i < soluong_khongkyhan; i++)
            {
                if (ListSoKhongKyHan[i]._MASO == maso)
                {
                    return false; // bị trùng.
                }
            }
            return true; // Không bị trùng
        }

        // không thể có 2 thằng trùng CMND nhưng khác tên
        // nếu vi phạm luật => false
        public bool KiemTraBiTrung(string cmnd, string ten)
        {
            int soluong_cokyhan = ListSoCoKyHan.Count();
            int soluong_khongkyhan = ListSoKhongKyHan.Count();

            for (int i = 0; i < soluong_cokyhan; i++)
            {
                if (ListSoCoKyHan[i]._CMND == cmnd && ListSoCoKyHan[i]._HoTen != ten)
                {
                    return false;
                }
            }

            for (int i = 0; i < soluong_khongkyhan; i++)
            {
                if (ListSoKhongKyHan[i]._CMND == cmnd && ListSoKhongKyHan[i]._HoTen != ten)
                {
                    return false;
                }
            }
            return true; // hợp lệ (1 người tạo ra nhiều sổ) hoặc là không bị trùng CMND
        }

        public bool KiemTraDuLieuTruyenVe(string maso, string cmnd, string hoten)
        {
            int soluong_cokyhan = ListSoCoKyHan.Count();
            int soluong_khongkyhan = ListSoKhongKyHan.Count();

            // duyệt qua danh sách sổ có kỳ hạn
            for (int i = 0; i < soluong_cokyhan; i++)
            {
                if (ListSoCoKyHan[i]._MASO != maso)
                {
                    if (ListSoCoKyHan[i]._CMND == cmnd && ListSoCoKyHan[i]._HoTen != hoten)
                    {
                        return false;
                    }
                }
            }

            // duyệt qua danh sách sổ không kỳ hạn
            for (int i = 0; i < soluong_khongkyhan; i++)
            {
                if (ListSoKhongKyHan[i]._MASO != maso)
                {
                    if (ListSoKhongKyHan[i]._CMND == cmnd && ListSoKhongKyHan[i]._HoTen != hoten)
                    {
                        return false;
                    }
                }
            }
            return true;
        }

        // Hàm xóa 1 cuốn sổ có mã số truyền vào
        public void XoaSo(string maso)
        {
            int soluong_cokyhan = ListSoCoKyHan.Count();
            int soluong_khongkyhan = ListSoKhongKyHan.Count();

            // duyệt qua danh sách sổ có kỳ hạn
            for (int i = 0; i < soluong_cokyhan; i++)
            {
                if (ListSoCoKyHan[i]._MASO == maso)
                {
                    ListSoCoKyHan.RemoveAt(i);
                    return;
                }
            }

            // duyệt qua danh sách sổ không kỳ hạn
            for (int i = 0; i < soluong_khongkyhan; i++)
            {
                if (ListSoKhongKyHan[i]._MASO == maso)
                {
                    ListSoKhongKyHan.RemoveAt(i);
                    return;
                }
            }
        }

        public DateTime TimNgayLapSoCuaSoDangTimKiem(string maso)
        {
            int soluong_cokyhan = ListSoCoKyHan.Count();
            int soluong_khongkyhan = ListSoKhongKyHan.Count();

            DateTime dt = new DateTime();

            // duyệt qua danh sách sổ có kỳ hạn
            for (int i = 0; i < soluong_cokyhan; i++)
            {
                if (ListSoCoKyHan[i]._MASO == maso)
                {
                    return ListSoCoKyHan[i]._NgayLapSo;
                  
                }
            }
            

            // duyệt qua danh sách sổ không kỳ hạn
            for (int i = 0; i < soluong_khongkyhan; i++)
            {
                if (ListSoKhongKyHan[i]._MASO == maso)
                {
                    dt =  ListSoCoKyHan[i]._NgayLapSo;
                }
            }
            return dt;
        }

    }
}
