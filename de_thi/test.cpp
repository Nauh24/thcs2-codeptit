#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// �?nh nghia c?u tr�c KhachHang
typedef struct {
    char id[10];
    char name[100];
    char soPhong[10];
    int soNgay;
    int tienPhatSinh;
} KhachHang;

// H�m t�nh don gi� d?a tr�n s? ph�ng
int donGia(char soPhong[]) {
    switch(soPhong[0]) {
        case '1': return 25;
        case '2': return 34;
        case '3': return 50;
        default: return 80;
    }
}

// H�m t�nh ti?n th�nh ti?n
int thanhTien(KhachHang kh) {
    return kh.soNgay * donGia(kh.soPhong) + kh.tienPhatSinh;
}

// H�m so s�nh d? s?p x?p theo th�nh ti?n gi?m d?n
int compare(const void *a, const void *b) {
    KhachHang *khA = (KhachHang *)a;
    KhachHang *khB = (KhachHang *)b;
    return thanhTien(*khB) - thanhTien(*khA);
}

// H�m in th�ng tin kh�ch h�ng
void printfKH(KhachHang kh) {
    printf("%s %s %s %d %d\n", kh.id, kh.name, kh.soPhong, kh.soNgay, thanhTien(kh));
}

int main() {
    int n;
    scanf("%d", &n);
    KhachHang a[n];
    for (int i = 0; i < n; i++) {
        // T?o ID cho kh�ch h�ng
        sprintf(a[i].id, "KH%02d", i + 1);

        // B? qua newline sau s? n
        getchar();

        // Nh?p t�n kh�ch h�ng
        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\n")] = '\0';

        // Nh?p s? ph�ng
        fgets(a[i].soPhong, sizeof(a[i].soPhong), stdin);
        a[i].soPhong[strcspn(a[i].soPhong, "\n")] = '\0';

        // Nh?p ng�y d?n v� ng�y di
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

        // Nh?p ti?n ph�t sinh
        scanf("%d", &a[i].tienPhatSinh);
    }

    // S?p x?p theo th�nh ti?n gi?m d?n
    qsort(a, n, sizeof(KhachHang), compare);

    // In ra k?t qu?
    for (int i = 0; i < n; i++) {
        printfKH(a[i]);
    }

    return 0;
}

