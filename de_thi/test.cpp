#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// Ð?nh nghia c?u trúc KhachHang
typedef struct {
    char id[10];
    char name[100];
    char soPhong[10];
    int soNgay;
    int tienPhatSinh;
} KhachHang;

// Hàm tính don giá d?a trên s? phòng
int donGia(char soPhong[]) {
    switch(soPhong[0]) {
        case '1': return 25;
        case '2': return 34;
        case '3': return 50;
        default: return 80;
    }
}

// Hàm tính ti?n thành ti?n
int thanhTien(KhachHang kh) {
    return kh.soNgay * donGia(kh.soPhong) + kh.tienPhatSinh;
}

// Hàm so sánh d? s?p x?p theo thành ti?n gi?m d?n
int compare(const void *a, const void *b) {
    KhachHang *khA = (KhachHang *)a;
    KhachHang *khB = (KhachHang *)b;
    return thanhTien(*khB) - thanhTien(*khA);
}

// Hàm in thông tin khách hàng
void printfKH(KhachHang kh) {
    printf("%s %s %s %d %d\n", kh.id, kh.name, kh.soPhong, kh.soNgay, thanhTien(kh));
}

int main() {
    int n;
    scanf("%d", &n);
    KhachHang a[n];
    for (int i = 0; i < n; i++) {
        // T?o ID cho khách hàng
        sprintf(a[i].id, "KH%02d", i + 1);

        // B? qua newline sau s? n
        getchar();

        // Nh?p tên khách hàng
        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\n")] = '\0';

        // Nh?p s? phòng
        fgets(a[i].soPhong, sizeof(a[i].soPhong), stdin);
        a[i].soPhong[strcspn(a[i].soPhong, "\n")] = '\0';

        // Nh?p ngày d?n và ngày di
        char ngayDen[11], ngayDi[11];
        fgets(ngayDen, sizeof(ngayDen), stdin);
        fgets(ngayDi, sizeof(ngayDi), stdin);

        struct tm tmNgayDen = {0}, tmNgayDi = {0};
        strptime(ngayDen, "%d/%m/%Y", &tmNgayDen);
        strptime(ngayDi, "%d/%m/%Y", &tmNgayDi);

        time_t tNgayDen = mktime(&tmNgayDen);
        time_t tNgayDi = mktime(&tmNgayDi);

        double seconds = difftime(tNgayDi, tNgayDen);
        a[i].soNgay = (int)(seconds / (60 * 60 * 24)) + 1;

        // Nh?p ti?n phát sinh
        scanf("%d", &a[i].tienPhatSinh);
    }

    // S?p x?p theo thành ti?n gi?m d?n
    qsort(a, n, sizeof(KhachHang), compare);

    // In ra k?t qu?
    for (int i = 0; i < n; i++) {
        printfKH(a[i]);
    }

    return 0;
}

