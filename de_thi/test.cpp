#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char id[5];
    char name[100];
    char soPhong[4];
    int soNgay;
    int tienPhatSinh;
} KhachHang;

int donGia(char soPhong[]) {
    if (soPhong[0] == '1') return 25;
    else if (soPhong[0] == '2') return 34;
    else if (soPhong[0] == '3') return 50;
    else return 80;
}

int thanhTien(KhachHang kh) {
    return kh.soNgay * donGia(kh.soPhong) + kh.tienPhatSinh;
}

void printfKhachHang(KhachHang kh) {
    printf("%s %s %s %d %d\n", kh.id, kh.name, kh.soNgay, thanhTien(kh));
}

int cmp(const void *a, const void *b) {
    KhachHang *kh1 = (KhachHang *)a;
    KhachHang *kh2 = (KhachHang *)b;
    return thanhTien(*kh2) - thanhTien(*kh1);
}

int calculateDays(char ngayDen[], char ngayDi[]) {
    int day1, month1, year1;
    int day2, month2, year2;
    sscanf(ngayDen, "%d/%d/%d", &day1, &month1, &year1);
    sscanf(ngayDi, "%d/%d/%d", &day2, &month2, &year2);
    
    struct tm tm1 = {0}, tm2 = {0};
    tm1.tm_mday = day1;
    tm1.tm_mon = month1 - 1;
    tm1.tm_year = year1 - 1900;
    
    tm2.tm_mday = day2;
    tm2.tm_mon = month2 - 1;
    tm2.tm_year = year2 - 1900;
    
    time_t t1 = mktime(&tm1);
    time_t t2 = mktime(&tm2);
    
    return (int)difftime(t2, t1) / (60 * 60 * 24) + 1;
}

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    KhachHang a[n];

    for (int i = 0; i < n; i++) {
        sprintf(a[i].id, "KH%02d", i + 1);
        getchar(); // Clear newline character
        fgets(a[i].name, 100, stdin);
        a[i].name[strcspn(a[i].name, "\n")] = '\0'; // Remove newline character
        scanf("%s", a[i].soPhong);
        char ngayDen[11], ngayDi[11];
        scanf("%s %s", ngayDen, ngayDi);
        a[i].soNgay = calculateDays(ngayDen, ngayDi);
        scanf("%d", &a[i].tienPhatSinh);
    }

    qsort(a, n, sizeof(KhachHang), cmp);

    for (int i = 0; i < n; i++) {
        printfKhachHang(a[i]);
    }

    return 0;
}

