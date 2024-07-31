#include <iostream>
#include "include/nhanvien.h"

using namespace std;

void menu() {
    cout << "||========= Chuong trinh quan ly luong nhan vien =================||" << endl;
    cout << "|| 1. Them nhan vien                                              ||" << endl;
    cout << "|| 2. Hien thi danh sach                                          ||" << endl;
    cout << "|| 3. Cap nhat thong tin                                          ||" << endl;
    cout << "|| 4. Xoa nhan vien                                               ||" << endl;
    cout << "|| 5. Tim kiem nhan vien                                          ||" << endl;
    cout << "|| 6. Them luong nhan vien                                        ||" << endl;
    cout << "|| 7. Tru luong nhan vien                                         ||" << endl;
    cout << "|| 8. Thoat                                                       ||" << endl;
    cout << "||================================================================||" << endl;
}

int main() {
    NhanVien dsNhanVien[100];
    int soLuongNhanVien = 0; 

    int luaChon;
    do {
        menu();
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon) {
            case 1: {
                NhanVien nv;
                nv.NhapNhanVien();
                dsNhanVien[soLuongNhanVien] = nv;
                soLuongNhanVien++;
                cout << "Them nhan vien thanh cong!" << endl; 
                break;
            }
            case 2: {
                if (soLuongNhanVien == 0) {
                    cout << "Danh sach nhan vien trong!" << endl;
                } else {
                    cout << "Danh sach nhan vien:" << endl;
                    for (int i = 0; i < soLuongNhanVien; i++) {
                        cout << "Nhan vien " << i + 1 << ":" << endl;
                        dsNhanVien[i].HienThiNhanVien();
                        cout << endl;
                    }
                }
                break;
            }
            case 3: {
                if (soLuongNhanVien == 0) {
                    cout << "Danh sach nhan vien trong!" << endl;
                } else {
                    int maNV;
                    cout << "Nhap ma nhan vien can cap nhat: ";
                    cin >> maNV;
                    bool found = false;
                    for (int i = 0; i < soLuongNhanVien; i++) {
                        if (dsNhanVien[i].getMaNhanVien() == maNV) {
                            dsNhanVien[i].CapNhapThongTinNhanVien();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Khong tim thay nhan vien co ma so " << maNV << endl;
                    }
                }
                break; 
            }
            case 4: {
                if (soLuongNhanVien == 0) {
                    cout << "Danh sach nhan vien trong!" << endl;
                } else {
                    int maNV;
                    cout << "Nhap ma nhan vien can xoa: ";
                    cin >> maNV;
                    bool found = false;
                    for (int i = 0; i < soLuongNhanVien; i++) {
                        if (dsNhanVien[i].getMaNhanVien() == maNV) {
                            for (int j = i; j < soLuongNhanVien - 1; j++) {
                                dsNhanVien[j] = dsNhanVien[j + 1];
                            }
                            soLuongNhanVien--;
                            found = true;
                            cout << "Da xoa nhan vien co ma so " << maNV << endl;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Khong tim thay nhan vien co ma so " << maNV << endl;
                    }
                }
                break;
            }
            case 5: {
                if (soLuongNhanVien == 0) {
                    cout << "Danh sach nhan vien trong!" << endl;
                } else {
                    int maNV;
                    cout << "Nhap ma nhan vien can tim kiem: ";
                    cin >> maNV;
                    bool found = false;
                    for (int i = 0; i < soLuongNhanVien; i++) {
                        if (dsNhanVien[i].getMaNhanVien() == maNV) {
                            cout << "Thong tin nhan vien can tim: " << endl;
                            dsNhanVien[i].HienThiNhanVien();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Khong tim thay nhan vien co ma so " << maNV << endl;
                    }
                }
                break;
            }
            case 6: {
                if (soLuongNhanVien == 0) {
                    cout << "Danh sach nhan vien trong!" << endl;
                } else {
                    int maNV;
                    double soTienThem;
                    cout << "Nhap ma nhan vien can them luong: ";
                    cin >> maNV;
                    cout << "Nhap so tien can them: ";
                    cin >> soTienThem;
                    bool found = false;
                    for (int i = 0; i < soLuongNhanVien; i++) {
                        if (dsNhanVien[i].getMaNhanVien() == maNV) {
                            dsNhanVien[i].ThemLuong(soTienThem);
                            found = true;
                            cout << "Da them luong cho nhan vien co ma so " << maNV << endl;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Khong tim thay nhan vien co ma so " << maNV << endl;
                    }
                }
                break;
            }
            case 7: {
                if (soLuongNhanVien == 0) {
                    cout << "Danh sach nhan vien trong!" << endl;
                } else {
                    int maNV;
                    double soTienTru;
                    cout << "Nhap ma nhan vien can tru luong: ";
                    cin >> maNV;
                    cout << "Nhap so tien can tru: ";
                    cin >> soTienTru;
                    bool found = false;
                    for (int i = 0; i < soLuongNhanVien; i++) {
                        if (dsNhanVien[i].getMaNhanVien() == maNV) {
                            dsNhanVien[i].TruLuong(soTienTru);
                            found = true;
                            cout << "Da tru luong cho nhan vien co ma so " << maNV << endl;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Khong tim thay nhan vien co ma so " << maNV << endl;
                    }
                }
                break;
            }
            case 8: {
                cout << "Ket thuc chuong trinh!" << endl;
                break;
            }
            default:
                cout << "Lua chon khong hop le!" << endl;
                break;
        }
    } while (luaChon != 8);

    return 0;
}
