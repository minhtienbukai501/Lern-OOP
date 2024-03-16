/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package xeploaihocsinh;

/**
 *
 * @author nguyenvietnamson
 */
public class XepLoaiHocSinh {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        HocSinh hs = new HocSinh("123", "abc", 10, 8.5, 9.5);
        HocSinh hs1 = new HocSinh(hs);
        hs1.Xuat();
        System.out.print("\nDiem trung binh = " + hs1.TinhDiemTrungBinh());
        System.out.print("\nXep loai: " + hs1.XepLoai());
    }
    
}
