/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package xeploaihocsinh;

import java.util.Scanner;

/**
 *
 * @author nguyenvietnamson
 */
public class HocSinh {
    private String MaSo, HoTen;
    private Double DiemToan, DiemLy, DiemHoa;
    
    public void Nhap(){
        Scanner scan = new Scanner(System.in);
        
        System.out.print("\nNhap vao ma so: ");
        setMaSo(scan.nextLine());
        
        System.out.print("\nNhap vao ho ten: ");
        setHoTen(scan.nextLine());
        
        // Nhập điểm toán.
        while(true){
            try{
                System.out.print("\nNhap vao diem toan: ");
                setDiemToan((Double) Double.parseDouble(scan.nextLine()));
            
                if(getDiemToan() < 0 || getDiemToan() > 10){
                    System.out.print("\nDiem toan khong hop le. Xin kiem tra lai !");
                }
                else{
                    break; // Hợp lệ thì ta thoát khỏi vòng lặp vô tận.
                }
            }
            catch(Exception ex){
                System.out.print("\nKieu du lieu khong hop le. Xin kiem tra lai !");
            }
        }
        
        // Nhập điểm lý.
        while(true){
            try{
                System.out.print("\nNhap vao diem ly: ");
                setDiemLy((Double) Double.parseDouble(scan.nextLine()));
            
                if(getDiemLy() < 0 || getDiemLy() > 10){
                    System.out.print("\nDiem ly khong hop le. Xin kiem tra lai !");
                }
                else{
                    break; // Hợp lệ thì ta thoát khỏi vòng lặp vô tận.
                }
            }
            catch(Exception ex){
                System.out.print("\nKieu du lieu khong hop le. Xin kiem tra lai !");
            }
        }
        
        // Nhập điểm hóa.
        while(true){
            try{
                System.out.print("\nNhap vao diem hoa: ");
                setDiemHoa((Double) Double.parseDouble(scan.nextLine()));
            
                if(getDiemHoa() < 0 || getDiemHoa() > 10){
                    System.out.print("\nDiem hoa khong hop le. Xin kiem tra lai !");
                }
                else{
                    break; // Hợp lệ thì ta thoát khỏi vòng lặp vô tận.
                }
            }
            catch(Exception ex){
                System.out.print("\nKieu du lieu khong hop le. Xin kiem tra lai !");
            }
        }
    }
    
    public void Xuat(){
        System.out.print("\nMa so: " + getMaSo());
        System.out.print("\nHo ten: " + getHoTen());
        System.out.print("\nDiem toan: " + getDiemToan());
        System.out.print("\nDiem ly: " + getDiemLy());
        System.out.print("\nDiem hoa: " + getDiemHoa());
    }
    
    // Hàm dựng mặc định.
    public HocSinh(){
        MaSo = "69";
        HoTen = "Son dep trai";
        DiemToan = 8.5;
        DiemLy = 7.5;
        DiemHoa = 5.0;
    }
    
    // Hàm dựng tham số.
    public HocSinh(String ms, String ht, 
            double toan, double ly, double hoa){
        this.MaSo = ms;
        this.HoTen = ht;
        DiemToan = toan;
        DiemLy = ly;
        DiemHoa = hoa;
    }
    
    // Hàm dựng sao chép.
    public HocSinh(HocSinh hs){
        MaSo = hs.MaSo;
        HoTen = hs.HoTen;
        DiemToan = hs.DiemToan;
        DiemLy = hs.DiemLy;
        DiemHoa = hs.DiemHoa;
    }
    
    public Double TinhDiemTrungBinh(){
        return (getDiemToan() + getDiemLy() + getDiemHoa()) / 3;
    }
    
    public String XepLoai(){
        Double Dtb = TinhDiemTrungBinh(); // Gọi lại phương thức để trả ra điểm trung bình.
        
        if(Dtb < 3.5){
            return "Yeu";
        }
        
        if(Dtb < 5){
            return "Trung Binh";
        }
        
        if(Dtb < 7){
            return "Trung Binh Kha";
        }
        
        if(Dtb < 8){
            return "Kha";
        }
        
        if(Dtb < 9){
            return "Gioi";
        }
        return "Xuat Sac";
    }

    /**
     * @return the DiemToan
     */
    public Double getDiemToan() {
        return DiemToan;
    }

    /**
     * @param DiemToan the DiemToan to set
     */
    public void setDiemToan(Double DiemToan) {
        this.DiemToan = DiemToan;
    }

    /**
     * @return the MaSo
     */
    public String getMaSo() {
        return MaSo;
    }

    /**
     * @param MaSo the MaSo to set
     */
    public void setMaSo(String MaSo) {
        this.MaSo = MaSo;
    }

    /**
     * @return the HoTen
     */
    public String getHoTen() {
        return HoTen;
    }

    /**
     * @param HoTen the HoTen to set
     */
    public void setHoTen(String HoTen) {
        this.HoTen = HoTen;
    }

    /**
     * @return the DiemLy
     */
    public Double getDiemLy() {
        return DiemLy;
    }

    /**
     * @param DiemLy the DiemLy to set
     */
    public void setDiemLy(Double DiemLy) {
        this.DiemLy = DiemLy;
    }

    /**
     * @return the DiemHoa
     */
    public Double getDiemHoa() {
        return DiemHoa;
    }

    /**
     * @param DiemHoa the DiemHoa to set
     */
    public void setDiemHoa(Double DiemHoa) {
        this.DiemHoa = DiemHoa;
    }
}
