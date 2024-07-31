#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>

using namespace std;

class NhanVien
{
private:
    int maNhanVien;
    string hoTen;
    int tuoi;
    string gioiTinh;
    string diaChi;
    string soDienThoai;
    double luong;
    int soNgayLamViec;
    int soNgayNghi;

public:
    NhanVien(
        int maNhanVien = 0,
        string hoTen = "",
        int tuoi = 0,
        string gioiTinh = "",
        string diaChi = "",
        string soDienThoai = "",
        double luong = 0.0,
        int soNgayLamViec = 0,
        int soNgayNghi = 0);

    ~NhanVien();

    int getMaNhanVien();
    void setMaNhanVien(int maNV);

    string getHoTen();
    void setHoTen(string hoTenNV);

    int getTuoi();
    void setTuoi(int tuoiNV);

    string getGioiTinh();
    void setGioiTinh(string gioiTinhNV);

    string getDiaChi();
    void setDiaChi(string diaChiNV);

    string getSoDienThoai();
    void setSoDienThoai(string soDienThoaiNV);

    double getLuong();
    void setLuong(double luongNV);

    int getSoNgayLamViec();
    void setSoNgayLamViec(int soNgayLamViec);

    int getSoNgayNghi();
    void setSoNgayNghi(int soNgayNghi);

    // Phuong thuc vao va hien thi
    void NhapNhanVien();
    void HienThiNhanVien();
    void CapNhapThongTinNhanVien();
    void XoaNhanVien();
    void TimNhanVien();
    void CapNhatNgayLamViec(int soNgayLamViec);
    void CapNhatNgayNghi(int soNgayNghi);
    void ThemLuong(double soTienThem);
    void TruLuong(double soTienTru);
    double TinhLuongTheoNgay();
};

#endif
