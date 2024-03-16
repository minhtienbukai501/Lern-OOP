/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_quanlydocgia;

/**
 *
 * @author NguyenVietNamSon
 */
public class DocGiaNguoiLon extends DocGia{
        private String CMND;

        DocGia x = new DocGia();
        public void Nhap()
        {
            x.Nhap(); // Gọi lại phương thức nhập của cha

            // CMND sẽ nhập trong thư viện
        }

        public void Xuat()
        {
            x.Xuat(); // Gọi lại phương thức xuất của cha

            System.out.print("\nCMND: " + getCMND());
            System.out.print("\nTien lam the: " + String.valueOf(TinhTienLamThe()));
        }

        public float TinhTienLamThe()
        {
            return x.SoThangHieuLuc * 10000;
        }

    /**
     * @return the CMND
     */
    public String getCMND() {
        return CMND;
    }

    /**
     * @param CMND the CMND to set
     */
    public void setCMND(String CMND) {
        this.CMND = CMND;
    }
}
