#include <stdio.h>

struct sinhvien {
    int maSo;
    char hoTen[1000];
    char ngaySinh[1000];
    float diemMon1, diemMon2, diemMon3;
};

typedef struct sinhvien SinhVien;

void nhapThongTin(SinhVien* sv) {
    getchar();
    gets(sv->hoTen);
    gets(sv->ngaySinh);
    scanf("%f%f%f", &sv->diemMon1, &sv->diemMon2, &sv->diemMon3);
}

void xuatThongTin(SinhVien sv) {
    printf("%d %s %s %.1f\n", sv.maSo, sv.hoTen, sv.ngaySinh, sv.diemMon1 + sv.diemMon2 + sv.diemMon3);
}

float timMax(float diem1, float diem2) {
    return (diem1 > diem2) ? diem1 : diem2;
}

int main() {
    int soLuongSinhVien;
    scanf("%d", &soLuongSinhVien);
    SinhVien danhSachSinhVien[soLuongSinhVien];

    for (int i = 0; i < soLuongSinhVien; i++) {
        nhapThongTin(&danhSachSinhVien[i]);
        danhSachSinhVien[i].maSo = i + 1;
    }

    float diemCaoNhat = 0;
    for (int i = 0; i < soLuongSinhVien; i++) {
        float tongDiem = danhSachSinhVien[i].diemMon1 + danhSachSinhVien[i].diemMon2 + danhSachSinhVien[i].diemMon3;
        diemCaoNhat = timMax(diemCaoNhat, tongDiem);
    }

    for (int i = 0; i < soLuongSinhVien; i++) {
        float tongDiem = danhSachSinhVien[i].diemMon1 + danhSachSinhVien[i].diemMon2 + danhSachSinhVien[i].diemMon3;
        if (diemCaoNhat == tongDiem) {
            xuatThongTin(danhSachSinhVien[i]);
        }
    }

    return 0;
}

