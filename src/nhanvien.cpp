#include "include/nhanvien.h"
#include <iostream>
#include <iomanip>
#include <limits>

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

// Nhập thông tin nhân viên
void NhanVien::NhapNhanVien()
{
    while (true)
    {
        cout << "Nhap ma nhan vien (6 chu so): ";
        cin >> maNhanVien;

        if (cin.fail() || maNhanVien < 100000 || maNhanVien > 999999)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> Ma nhan vien khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (true)
    {
        cout << "Nhap ho ten nhan vien: ";
        getline(cin, hoTen);
        if (hoTen.empty())
        {
            cout << "==> Ho ten nhan vien khong duoc de trong! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap tuoi nhan vien (tu 18 den 35 tuoi): ";
        cin >> tuoi;
        if (cin.fail() || tuoi < 18 || tuoi > 35)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> Tuoi nhan vien khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (true)
    {
        cout << "Nhap gioi tinh nhan vien (Nam/Nu): ";
        getline(cin, gioiTinh);
        if (gioiTinh.empty())
        {
            cout << "==> Gioi tinh nhan vien khong duoc de trong! Vui long nhap lai." << endl;
        }
        else if (gioiTinh == "Nam" || gioiTinh == "Nu")
        {
            break;
        }
        else
        {
            cout << "==> Gioi tinh nhan vien phai la 'Nam' hoac 'Nu'! Vui long nhap lai." << endl;
        }
    }

    while (true)
    {
        cout << "Nhap dia chi nhan vien: ";
        getline(cin, diaChi);
        if (diaChi.empty())
        {
            cout << "==> Dia chi nhan vien khong duoc de trong! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap so dien thoai nhan vien (10 chu so): ";
        getline(cin, soDienThoai);
        if (soDienThoai.empty())
        {
            cout << "==> So dien thoai nhan vien khong duoc de trong! Vui long nhap lai." << endl;
        }
        else if (soDienThoai.length() != 10)
        {
            cout << "==> So dien thoai phai co 10 chu so! Vui long nhap lai." << endl;
        }
        else if (soDienThoai.find_first_not_of("0123456789") != string::npos)
        {
            cout << "==> So dien thoai phai la chu so! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap luong co ban moi ngay cua nhan vien (tu 100000 den 500000): ";
        cin >> luong;
        if (cin.fail() || luong < 100000 || luong > 500000)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> Luong co ban moi ngay khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap so ngay lam viec cua nhan vien (tu 1 den 31 ngay): ";
        cin >> soNgayLamViec;
        if (cin.fail() || soNgayLamViec < 1 || soNgayLamViec > 31)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> So ngay lam viec khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap so ngay nghi cua nhan vien (tu 0 den 31 ngay): ";
        cin >> soNgayNghi;
        if (cin.fail() || soNgayNghi < 0 || soNgayNghi > 31)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> So ngay nghi khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }
}

// Phương thức hiển thị nhân viên
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

// Phương thức cập nhật thông tin nhân viên
void NhanVien::CapNhapThongTinNhanVien()
{
    while (true)
    {
        cout << "Nhap ma nhan vien (6 chu so): ";
        cin >> maNhanVien;

        if (cin.fail() || maNhanVien < 100000 || maNhanVien > 999999)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> Ma nhan vien khong hop le! Vui long nhap lai." << endl;
        }
        else
        { 
            break;
        }
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (true)
    {
        cout << "Nhap ho ten nhan vien: ";
        getline(cin, hoTen);
        if (hoTen.empty())
        {
            cout << "==> Ho ten nhan vien khong duoc de trong! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap tuoi nhan vien (tu 18 den 35 tuoi): ";
        cin >> tuoi;
        if (cin.fail() || tuoi < 18 || tuoi > 35)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> Tuoi nhan vien khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (true)
    {
        cout << "Nhap gioi tinh nhan vien (Nam/Nu): ";
        getline(cin, gioiTinh);
        if (gioiTinh.empty())
        {
            cout << "==> Gioi tinh nhan vien khong duoc de trong! Vui long nhap lai." << endl;
        }
        else if (gioiTinh == "Nam" || gioiTinh == "Nu")
        {
            break;
        }
        else
        {
            cout << "==> Gioi tinh nhan vien phai la 'Nam' hoac 'Nu'! Vui long nhap lai." << endl;
        }
    }

    while (true)
    {
        cout << "Nhap dia chi nhan vien: ";
        getline(cin, diaChi);
        if (diaChi.empty())
        {
            cout << "==> Dia chi nhan vien khong duoc de trong! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap so dien thoai nhan vien (10 chu so): ";
        getline(cin, soDienThoai);
        if (soDienThoai.empty())
        {
            cout << "==> So dien thoai nhan vien khong duoc de trong! Vui long nhap lai." << endl;
        }
        else if (soDienThoai.length() != 10)
        {
            cout << "==> So dien thoai phai co 10 chu so! Vui long nhap lai." << endl;
        }
        else if (soDienThoai.find_first_not_of("0123456789") != string::npos)
        {
            cout << "==> So dien thoai phai la chu so! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap luong co ban moi ngay cua nhan vien (tu 100000 den 500000): ";
        cin >> luong;
        if (cin.fail() || luong < 100000 || luong > 500000)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> Luong co ban moi ngay khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap so ngay lam viec cua nhan vien (tu 1 den 31 ngay): ";
        cin >> soNgayLamViec;
        if (cin.fail() || soNgayLamViec < 1 || soNgayLamViec > 31)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> So ngay lam viec khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Nhap so ngay nghi cua nhan vien (tu 0 den 31 ngay): ";
        cin >> soNgayNghi;
        if (cin.fail() || soNgayNghi < 0 || soNgayNghi > 31)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "==> So ngay nghi khong hop le! Vui long nhap lai." << endl;
        }
        else
        {
            break;
        }
    }
}

// Phương thức xóa nhân viên
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

// Phương thức tìm kiếm nhân viên
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

// Phương thức cập nhật số ngày làm việc
void NhanVien::CapNhatNgayLamViec(int soNgayLamViec)
{
    this->soNgayLamViec = soNgayLamViec;
}

// Phương thức cập nhật số ngày nghỉ
void NhanVien::CapNhatNgayNghi(int soNgayNghi)
{
    this->soNgayNghi = soNgayNghi;
}

// Phương thức thêm lương
void NhanVien::ThemLuong(double soTienThem)
{
    luong += soTienThem;
}

// Phương thức trừ lương
void NhanVien::TruLuong(double soTienTru)
{
    luong -= soTienTru;
}

// Phương thức tính lương theo ngày
double NhanVien::TinhLuongTheoNgay()
{
    return luong * soNgayLamViec;
}
