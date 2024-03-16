/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_quanlydocgia;

import java.util.Scanner;

/**
 *
 * @author NguyenVietNamSon
 */
public class CNgay {
    private int Ngay, Thang, Nam;

        public void Nhap()
        {
            Scanner scan = new Scanner(System.in);
            System.out.print("\nNhap ngay: ");
            Ngay = Integer.parseInt(scan.nextLine());

            System.out.print("\nNhap thang: ");
            Thang = Integer.parseInt(scan.nextLine());

            System.out.print("\nNhap nam: ");
            Nam = Integer.parseInt(scan.nextLine());
        }

        public void Xuat()
        {
            System.out.println("Ngay " + String.valueOf(Ngay) + " thang " + String.valueOf(Thang) + " nam " + String.valueOf(Nam));
        }
}
