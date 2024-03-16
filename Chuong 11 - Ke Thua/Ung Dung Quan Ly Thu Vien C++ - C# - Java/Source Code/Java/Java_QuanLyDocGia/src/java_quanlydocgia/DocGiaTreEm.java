/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_quanlydocgia;

import java.io.Console;
import java.util.Scanner;

/**
 *
 * @author NguyenVietNamSon
 */
public class DocGiaTreEm extends DocGia{
    private String HoTenNguoiDaiDien;

        DocGia x = new DocGia();
        public void Nhap()
        {
            
            x.Nhap();

            Scanner scan = new Scanner(System.in);
            System.out.print("\nNhap vao ho ten nguoi dai dien: ");
            HoTenNguoiDaiDien = scan.nextLine();
        }

        public void Xuat()
        {
            x.Xuat();

            System.out.print("\nHo ten nguoi dai dien: " + String.valueOf(HoTenNguoiDaiDien));
            System.out.print("\nTien lam the: " + String.valueOf(TinhTienLamThe()));
            
        }

        public float TinhTienLamThe()
        {
            return 20000;
        }
}
