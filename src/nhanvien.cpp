#include "include/nhanvien.h"
#include <iostream>
#include <iomanip>

using namespace std;

NhanVien::NhanVien(int maNhanVien, string hoTen, int tuoi, string gioiTinh, string diaChi, string soDienThoai, double luong, int soNgayLamViec, int soNgayNghi)
{
    this->maNhanVien = maNhanVien;
    this->hoTen = hoTen;
    this->tuoi = tuoi;
    this->gioiTinh = gioiTinh;
    this->diaChi = diaChi;
    this->soDienThoai = soDienThoai;
    this->luong = luong;
    this->soNgayLamViec = soNgayLamViec;
    this->soNgayNghi = soNgayNghi;
}

NhanVien::~NhanVien() {}

int NhanVien::getMaNhanVien()
{
    return maNhanVien;
}

void NhanVien::setMaNhanVien(int maNV)
{
    maNhanVien = maNV;
}

string NhanVien::getHoTen()
{
    return hoTen;
}

void NhanVien::setHoTen(string hoTenNV)
{
    hoTen = hoTenNV;
}

int NhanVien::getTuoi()
{
    return tuoi;
}

void NhanVien::setTuoi(int tuoiNV)
{
    tuoi = tuoiNV;
}

string NhanVien::getGioiTinh()
{
    return gioiTinh;
}

void NhanVien::setGioiTinh(string gioiTinhNV)
{
    gioiTinh = gioiTinhNV;
}

string NhanVien::getDiaChi()
{
    return diaChi;
}

void NhanVien::setDiaChi(string diaChiNV)
{
    diaChi = diaChiNV;
}

string NhanVien::getSoDienThoai()
{
    return soDienThoai;
}

void NhanVien::setSoDienThoai(string soDienThoaiNV)
{
    soDienThoai = soDienThoaiNV;
}

double NhanVien::getLuong()
{
    return luong;
}

void NhanVien::setLuong(double luongNV)
{
    luong = luongNV;
}

int NhanVien::getSoNgayLamViec()
{
    return soNgayLamViec;
}

void NhanVien::setSoNgayLamViec(int soNgayLamViec)
{
    this->soNgayLamViec = soNgayLamViec;
}

int NhanVien::getSoNgayNghi()
{
    return soNgayNghi;
}

void NhanVien::setSoNgayNghi(int soNgayNghi)
{
    this->soNgayNghi = soNgayNghi;
}

// Phuong thuc nhap nhan vien
void NhanVien::NhapNhanVien()
{
    cout << "Nhap ma nhan vien: ";
    cin >> maNhanVien;
    cin.ignore();

    // Kiem tra truong nhap ho ten nhan vien
    cout << "Nhap ten nhan vien: ";
    while (true)
    {
        getline(cin, hoTen);
        if (hoTen.empty())
        {
            cout << "===> Ho ten nhan vien khong duoc de trong! Moi ban nhap lai: ";
        }
        else
        {
            break;
        }
    }

    cout << "Nhap tuoi nhan vien: ";
    cin >> tuoi;
    cin.ignore();

    // Kiem tra truong nhap gioi tinh nhan vien
    cout << "Nhap gioi tinh nhan vien (Nam/Nu): ";
    while (true)
    {
        getline(cin, gioiTinh);
        if (gioiTinh.empty())
        {
            cout << "===> Gioi tinh khong duoc de trong! Moi ban nhap lai: ";
        }
        else if (gioiTinh == "Nam" || gioiTinh == "Nu")
        {
            break;
        }
        else
        {
            cout << "===> Gioi tinh phai la 'Nam' hoac 'Nu'! Moi ban nhap lai: ";
        }
    }

    // Kiem tra truong nhap dia chi nhan vien
    cout << "Nhap dia chi nhan vien: ";
    while (true)
    {
        getline(cin, diaChi);
        if (diaChi.empty())
        {
            cout << "===> Dia chi khong duoc de trong! Moi ban nhap lai: ";
        }
        else
        {
            break;
        }
    }

    // Kiem tra truong nhap so dien thoai nhan vien
    cout << "Nhap so dien thoai nhan vien: ";
    while (true)
    {
        getline(cin, soDienThoai);
        if (soDienThoai.empty())
        {
            cout << "===> So dien thoai khong duoc de trong! Moi ban nhap lai: ";
        }
        else if (soDienThoai.length() != 10)
        {
            cout << "===> So dien thoai phai co 10 chu so! Moi ban nhap lai: ";
        }
        else if (soDienThoai.find_first_not_of("0123456789") != string::npos)
        {
            cout << "===> So dien thoai phai la con so! Moi ban nhap lai: ";
        }
        else
        {
            break;
        }
    }

    cout << "Nhap luong co ban moi ngay: ";
    cin >> luong;
    cin.ignore();

    cout << "Nhap so ngay lam viec trong thang: ";
    cin >> soNgayLamViec;
    cin.ignore();

    cout << "Nhap so ngay nghi trong thang: ";
    cin >> soNgayNghi;
    cin.ignore();
}

// Phuong thuc hien thi nhan vien
void NhanVien::HienThiNhanVien()
{
    cout << "Ma nhan vien: " << maNhanVien << endl;
    cout << "Ten nhan vien: " << hoTen << endl;
    cout << "Tuoi nhan vien: " << tuoi << endl;
    cout << "Gioi tinh nhan vien: " << gioiTinh << endl;
    cout << "Dia chi nhan vien: " << diaChi << endl;
    cout << "So dien thoai nhan vien: " << soDienThoai << endl;
    cout << "Luong co ban moi ngay: " << fixed << setprecision(2) << luong << " VND" << endl;
    cout << "So ngay lam viec: " << soNgayLamViec << endl;
    cout << "So ngay nghi: " << soNgayNghi << endl;
    cout << "Tong luong thang: " << fixed << setprecision(2) << TinhLuongTheoNgay() << " VND" << endl;
}

// Phuong thuc cap nhap thong tin nhan vien
void NhanVien::CapNhapThongTinNhanVien()
{
    cout << "Nhap ma nhan vien: ";
    cin >> maNhanVien;
    cin.ignore();

    // Kiem tra truong nhap ho ten nhan vien
    cout << "Nhap ten nhan vien: ";
    while (true)
    {
        getline(cin, hoTen);
        if (hoTen.empty())
        {
            cout << "===> Ho ten nhan vien khong duoc de trong! Moi ban nhap lai: ";
        }
        else
        {
            break;
        }
    }

    cout << "Nhap tuoi nhan vien: ";
    cin >> tuoi;
    cin.ignore();

    // Kiem tra truong nhap gioi tinh nhan vien
    cout << "Nhap gioi tinh nhan vien (Nam/Nu): ";
    while (true)
    {
        getline(cin, gioiTinh);
        if (gioiTinh.empty())
        {
            cout << "===> Gioi tinh khong duoc de trong! Moi ban nhap lai: ";
        }
        else if (gioiTinh == "Nam" || gioiTinh == "Nu")
        {
            break;
        }
        else
        {
            cout << "===> Gioi tinh phai la 'Nam' hoac 'Nu'! Moi ban nhap lai: ";
        }
    }

    // Kiem tra truong nhap dia chi nhan vien
    cout << "Nhap dia chi nhan vien: ";
    while (true)
    {
        getline(cin, diaChi);
        if (diaChi.empty())
        {
            cout << "===> Dia chi khong duoc de trong! Moi ban nhap lai: ";
        }
        else
        {
            break;
        }
    }

    // Kiem tra truong nhap so dien thoai nhan vien
    cout << "Nhap so dien thoai nhan vien: ";
    while (true)
    {
        getline(cin, soDienThoai);
        if (soDienThoai.empty())
        {
            cout << "===> So dien thoai khong duoc de trong! Moi ban nhap lai: ";
        }
        else if (soDienThoai.length() != 10)
        {
            cout << "===> So dien thoai phai co 10 chu so! Moi ban nhap lai: ";
        }
        else if (soDienThoai.find_first_not_of("0123456789") != string::npos)
        {
            cout << "===> So dien thoai phai la con so! Moi ban nhap lai: ";
        }
        else
        {
            break;
        }
    }

    cout << "Nhap luong co ban moi ngay: ";
    cin >> luong;
    cin.ignore();

    cout << "Nhap so ngay lam viec trong thang: ";
    cin >> soNgayLamViec;
    cin.ignore();

    cout << "Nhap so ngay nghi trong thang: ";
    cin >> soNgayNghi;
    cin.ignore();
}

// Phuong thuc xoa nhan vien
void NhanVien::XoaNhanVien()
{
    maNhanVien = 0;
    hoTen = "";
    tuoi = 0;
    gioiTinh = "";
    diaChi = "";
    soDienThoai = "";
    luong = 0.0;
    soNgayLamViec = 0;
    soNgayNghi = 0;
}

// Phuong thuc tim kiem nhan vien
void NhanVien::TimNhanVien()
{
    cout << "Nhap ma nhan vien can tim kiem: ";
    int maTim;
    cin >> maTim;
    cin.ignore();

    if (maTim == maNhanVien)
    {
        cout << "Thong tin nhan vien can tim: " << endl;
        HienThiNhanVien();
    }
    else
    {
        cout << "Khong tim thay nhan vien co ma so " << maTim << endl;
    }
}

// Phuong thuc cap nhat so ngay lam viec
void NhanVien::CapNhatNgayLamViec(int soNgayLamViec)
{
    this->soNgayLamViec = soNgayLamViec;
}

// Phuong thuc cap nhat so ngay nghi
void NhanVien::CapNhatNgayNghi(int soNgayNghi)
{
    this->soNgayNghi = soNgayNghi;
}

// Phuong thuc them luong
void NhanVien::ThemLuong(double soTienThem)
{
    luong += soTienThem;
}

// Phuong thuc tru luong
void NhanVien::TruLuong(double soTienTru)
{
    luong -= soTienTru;
}

// Phuong thuc tinh luong theo ngay
double NhanVien::TinhLuongTheoNgay()
{
    return luong * soNgayLamViec;
}
