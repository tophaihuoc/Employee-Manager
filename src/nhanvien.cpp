#include "include/nhanvien.h"
#include <iostream>
#include <string>

using namespace std;

NhanVien::NhanVien(int maNhanVien, string tenNhanVien, int tuoi, string gioiTinh, string diaChi, string soDienThoai, double luong) {
    this->maNhanVien = maNhanVien;
    this->tenNhanVien = tenNhanVien;
    this->tuoi = tuoi;
    this->gioiTinh = gioiTinh;
    this->diaChi = diaChi;
    this->soDienThoai = soDienThoai; 
    this->luong = luong;
}

NhanVien::~NhanVien() {
    
}

// Getter and Setter methods
int NhanVien::getMaNhanVien() {
    return maNhanVien;
}

void NhanVien::setMaNhanVien(int maNV) {
    maNhanVien = maNV;
}

string NhanVien::getTenNhanVien() {
    return tenNhanVien;
}

void NhanVien::setTenNhanVien(string tenNV) {
    tenNhanVien = tenNV;
}

int NhanVien::getTuoi() {
    return tuoi;
}

void NhanVien::setTuoi(int tuoiNV) {
    tuoi = tuoiNV;
}

string NhanVien::getGioiTinh() {
    return gioiTinh;
}

void NhanVien::setGioiTinh(string gioiTinhNV) {
    gioiTinh = gioiTinhNV;
}

string NhanVien::getDiaChi() {
    return diaChi;
}

void NhanVien::setDiaChi(string diaChiNV) {
    diaChi = diaChiNV;
}

string NhanVien::getSoDienThoai() {
    return soDienThoai;
}

void NhanVien::setSoDienThoai(string soDienThoaiNV) {
    soDienThoai = soDienThoaiNV;
}

double NhanVien::getLuong() {
    return luong;
}

void NhanVien::setLuong(double luongNV) {
    luong = luongNV;
}

// Phuong thuc nhap nhan vien
void NhanVien::NhapNhanVien() {
    cout << "Nhap ma nhan vien: ";
    cin >> maNhanVien;
    cin.ignore(); 

    // Code kiem tra xem truong nhap tenNhanVien 
    cout << "Nhap ten nhan vien: ";
    while (true) {
        getline(cin, tenNhanVien);
        if (tenNhanVien.empty()) {
            cout << "=> Ten nhan vien khong duoc de trong! Moi ban nhap lai: ";
        } else {
            break; // Exit the loop if the input is valid
        }
    }

    cout << "Nhap tuoi nhan vien: ";
    cin >> tuoi;
    cin.ignore(); 

    // Code kiem tra xem truong nhap gioTinh 
    cout << "Nhap gioi tinh nhan vien (Nam/Nu): ";
    while (true) {
        getline(cin, gioiTinh);
        if (gioiTinh.empty()) {
            cout << "=> Gioi tinh khong duoc de trong! Moi ban nhap lai: ";
        } else if (gioiTinh == "Nam" || gioiTinh == "Nu") {
            break; // Exit the loop if the input is valid
        } else {
            cout << "=> Gioi tinh phai la 'Nam' hoac 'Nu'! Moi nhap lai: ";
        }
    }

    // Code kiem tra xem truong nhap diaChi
    cout << "Nhap dia chi nhan vien: ";
    while (true) {
        getline(cin, diaChi);
        if (diaChi.empty()) {
            cout << "=> Dia chi nhan vien khong duoc de trong! Moi ban nhap lai: ";
        } else {
            break; // Exit the loop if the input is valid
        }
    }

    // Code kiem tra xem truong nhap soDienThoai
    cout << "Nhap so dien thoai nhan vien: ";
    while (true) {
        getline(cin, soDienThoai);
        if (soDienThoai.empty()) {
            cout << "=> So dien thoai khong duoc de trong! Moi ban nhap lai: ";
        } else if (soDienThoai.length() != 10) {
            cout << "=> So dien thoai phai co 10 chu so! Moi ban nhap lai: ";
        } else if (soDienThoai.find_first_not_of("0123456789") != string::npos) {
            cout << "=> So dien thoai chi duoc chua cac chu so! Moi ban nhap lai: ";
        } else {
            break; 
        }
    }

    cout << "Nhap luong nhan vien: ";
    cin >> luong;
    cin.ignore(); 
}

// Phuong thuc hien thi nhan vien
void NhanVien::HienThiNhanVien() {
    cout << "Ma nhan vien: " << maNhanVien << endl;
    cout << "Ten nhan vien: " << tenNhanVien << endl;
    cout << "Tuoi nhan vien: " << tuoi << endl;
    cout << "Gioi tinh nhan vien: " << gioiTinh << endl;
    cout << "Dia chi nhan vien: " << diaChi << endl;
    cout << "So dien thoai nhan vien: " << soDienThoai << endl;
    cout << "Luong nhan vien: " << luong << endl;
}

// Phuong thuc cap nhap thong tin nhan vien
void NhanVien::CapNhapThongTinNhanVien() {
    cout << "Nhap ten nhan vien moi: ";
    cin.ignore(); 
    getline(cin, tenNhanVien);

    cout << "Nhap tuoi nhan vien moi: ";
    cin >> tuoi;
    cin.ignore(); 

    cout << "Nhap gioi tinh nhan vien moi: ";
    getline(cin, gioiTinh);

    cout << "Nhap dia chi nhan vien moi: ";
    getline(cin, diaChi);

    cout << "Nhap so dien thoai nhan vien moi: ";
    getline(cin, soDienThoai);

    cout << "Nhap luong nhan vien moi: ";
    cin >> luong;
    cin.ignore(); 
}

// Phuong thuc xoa nhan vien
void NhanVien::XoaNhanVien() {
    maNhanVien = 0;
    tenNhanVien = "";
    tuoi = 0;
    gioiTinh = "";
    diaChi = "";
    soDienThoai = "";
    luong = 0.0;
}

// Phuong thuc tim kiem nhan vien
void NhanVien::TimNhanVien() {
    cout << "Nhap ma nhan vien can tim kiem: ";
    int maTim;
    cin >> maTim;
    cin.ignore(); 

    if (maTim == maNhanVien) {
        cout << "Thong tin nhan vien can tim: " << endl;
        HienThiNhanVien();
    } else {
        cout << "Khong tim thay nhan vien co ma: " << maTim << endl;
    }
}
