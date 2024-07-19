#include <stdio.h>
#include <stdlib.h>

struct sinhvien {
    int maSo;
    char hoTen[1000];
    char ngaySinh[1000];
    float tongDiem;
};

typedef struct sinhvien SinhVien;

void xuatThongTin(SinhVien sv) {
    printf("%d %s %s %.1f\n", sv.maSo, sv.hoTen, sv.ngaySinh, sv.tongDiem);
}

int soSanhDiem(const void* a, const void* b) {
    SinhVien* sv1 = (SinhVien*)a;
    SinhVien* sv2 = (SinhVien*)b;
    if (sv1->tongDiem > sv2->tongDiem) return -1;
    return 1;
}

int main() {
    int soLuongSinhVien;
    scanf("%d", &soLuongSinhVien);
    SinhVien danhSachSinhVien[soLuongSinhVien];
    float diemMon1, diemMon2, diemMon3;

    for (int i = 0; i < soLuongSinhVien; i++) {
        getchar();
        danhSachSinhVien[i].maSo = i + 1;
        gets(danhSachSinhVien[i].hoTen);
        gets(danhSachSinhVien[i].ngaySinh);
        scanf("%f%f%f", &diemMon1, &diemMon2, &diemMon3);
        danhSachSinhVien[i].tongDiem = diemMon1 + diemMon2 + diemMon3;
    }

    qsort(danhSachSinhVien, soLuongSinhVien, sizeof(SinhVien), soSanhDiem);

    for (int i = 0; i < soLuongSinhVien; i++) {
        if ((danhSachSinhVien[i].tongDiem == danhSachSinhVien[i + 1].tongDiem) && (danhSachSinhVien[i + 1].maSo < danhSachSinhVien[i].maSo)) {
            SinhVien temp = danhSachSinhVien[i];
            danhSachSinhVien[i] = danhSachSinhVien[i + 1];
            danhSachSinhVien[i + 1] = temp;
        }
    }

    for (int i = 0; i < soLuongSinhVien; i++) {
        xuatThongTin(danhSachSinhVien[i]);
    }

    return 0;
}

