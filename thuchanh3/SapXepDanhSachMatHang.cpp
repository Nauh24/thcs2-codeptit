#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sanpham {
    int stt;
    char ten[1000];
    char nhom[1000];
    float loi;
};

typedef struct sanpham SP;

void xuat(SP a) {
    printf("%d %s %s %.2f\n", a.stt, a.ten, a.nhom, a.loi);
}

int cmp(const void* a, const void* b) {
    SP* x = (SP*)a;
    SP* y = (SP*)b;
    if (x->loi < y->loi) return 1;
    if (x->loi > y->loi) return -1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    SP a[n];
    float m, b;

    for (int i = 0; i < n; i++) {
        getchar(); 

        a[i].stt = i + 1;

        fgets(a[i].ten, sizeof(a[i].ten), stdin);
        a[i].ten[strcspn(a[i].ten, "\n")] = '\0'; 

     
        fgets(a[i].nhom, sizeof(a[i].nhom), stdin);
        a[i].nhom[strcspn(a[i].nhom, "\n")] = '\0'; 
            scanf("%f%f", &m, &b);
        a[i].loi = b - m;
    }

        qsort(a, n, sizeof(SP), cmp);

    
    for (int i = 0; i < n; i++) {
        xuat(a[i]);
    }

    return 0;
}

