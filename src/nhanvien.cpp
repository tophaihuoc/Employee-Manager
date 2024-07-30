#include "include/nhanvien.h"

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

// Ham nhap nhan vien nhan vien
void NhanVien::NhapNhanVien() {
    cout << "Nhap ma nhan vien: ";
    cin >> maNhanVien;
    cout << "Nhap ten nhan vien: ";
    cin.ignore();
    getline(cin, tenNhanVien);
    cout << "Nhap tuoi nhan vien: ";
    cin >> tuoi;
    cout << "Nhap gioi tinh nhan vien (Nam/Nu): ";
    cin.ignore();
    getline(cin, gioiTinh);
    cout << "Nhap dia chi nhan vien: ";
    getline(cin, diaChi);
    cout << "Nhap so dien thoai nhan vien: ";
    getline(cin, soDienThoai);
    cout << "Nhap luong nhan vien: ";
    cin >> luong;
}

// Ham hien thi thong tin nhan vien
void NhanVien::HienThiNhanVien() {
    
    cout << "Ma nhan vien: " << maNhanVien << endl;
    cout << "Ten nhan vien: " << tenNhanVien << endl;
    cout << "Tuoi nhan vien: " << tuoi << endl;
    cout << "Gioi tinh nhan vien: " << gioiTinh << endl;
    cout << "Dia chi nhan vien: " << diaChi << endl;
    cout << "So dien thoai nhan vien: " << soDienThoai << endl;
    cout << "Luong nhan vien: " << luong << endl;
}

// Ham cap nhap thong tin nhan vien
void NhanVien::CapNhapThongTinNhanVien() {
    cout << "Nhap ten nhan vien moi: ";
    cin.ignore();
    getline(cin, tenNhanVien);
    cout << "Nhap tuoi nhan vien moi: ";
    cin >> tuoi;
    cout << "Nhap gioi tinh nhan vien moi: ";
    cin.ignore();
    getline(cin, gioiTinh);
    cout << "Nhap dia chi nhan vien moi: ";
    getline(cin, diaChi);
    cout << "Nhap so dien thoai nhan vien moi: ";
    getline(cin, soDienThoai);
    cout << "Nhap luong nhan vien moi: ";
    cin >> luong;   
}

// Ham xoa nhan vien
void NhanVien::XoaNhanVien() {
    maNhanVien = 0;
    tenNhanVien = "";
    tuoi = 0;
    gioiTinh = "";
    diaChi = "";
    soDienThoai = "";
    luong = 0.0;
}

// Ham tim kiem nhan vien
void NhanVien::TimNhanVien() {
    cout << "Nhap ma nhan vien can tim kiem: " << endl;
    int maTim;
    cin >> maTim;

    if(maTim == maNhanVien) {
        cout << "Thong tin nhan vien can tim: " << endl;
        HienThiNhanVien();
    } else {
        cout << "Khong tim thay nhan vien co ma: " << maTim << endl;
    }
}