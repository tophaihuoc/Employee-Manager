#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string> 

using namespace std;

class NhanVien {
private:
    int maNhanVien;
    string tenNhanVien;
    int tuoi;
    string gioiTinh;
    string diaChi;
    string soDienThoai;
    double luong;

public:
    NhanVien(int maNhanVien = 0, string tenNhanVien = "", int tuoi = 0, string gioiTinh = "", string diaChi = "", string soDienThoai = "", double luong = 0.0);

    ~NhanVien();

    int getMaNhanVien();
    void setMaNhanVien(int maNV);

    string getTenNhanVien();
    void setTenNhanVien(string tenNV);

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

    // Phuong thuc vao va hien thi
    void NhapNhanVien();
    void HienThiNhanVien();
    void CapNhapThongTinNhanVien();
    void XoaNhanVien();
    void TimNhanVien();
};

#endif
