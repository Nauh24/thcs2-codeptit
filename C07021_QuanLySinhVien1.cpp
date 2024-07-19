#include <stdio.h>

struct sinhvien{
	int id;
	char name[100];
	float a, b, c;
};

typedef struct sinhvien SV;

SV s[100];
int cnt = 0;

// H�m th�m sinh vi�n m?i
void addStudents() {
    int n;
    scanf("%d", &n);
    while (n--) {
        getchar(); // �?c k� t? '\n' sau khi nh?p s? lu?ng sinh vi�n
        s[cnt].id = cnt + 1;
        gets(s[cnt].name); // �?c t�n sinh vi�n
        scanf("%f%f%f", &s[cnt].a, &s[cnt].b, &s[cnt].c); // �?c di?m m�n A, B, C
        cnt++;
    }
}

// H�m c?p nh?t th�ng tin sinh vi�n theo m� sinh vi�n
void updateStudent() {
    int studentIndex;
    scanf("%d", &studentIndex);
    getchar(); // �?c k� t? '\n' sau khi nh?p m� sinh vi�n

    if (studentIndex > 0 && studentIndex <= cnt) {
        gets(s[studentIndex - 1].name); // C?p nh?t t�n sinh vi�n
        scanf("%f%f%f", &s[studentIndex - 1].a, &s[studentIndex - 1].b, &s[studentIndex - 1].c); // C?p nh?t di?m m�n A, B, C
    }
}

// H�m s?p x?p danh s�ch sinh vi�n theo t?ng di?m tang d?n
void sortStudents() {
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = i + 1; j < cnt; j++) {
            if ((s[i].a + s[i].b + s[i].c) > (s[j].a + s[j].b + s[j].c)) {
                SV tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }

    for (int i = 0; i < cnt; i++) {
        printf("%d %s %.1f %.1f %.1f\n", s[i].id, s[i].name, s[i].a, s[i].b, s[i].c);
    }
}

int main() {
    int choice;
    while (1) {
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudents();
                break;
            case 2:
                updateStudent();
                break;
            case 3:
                sortStudents();
                break;
            default:
                break;
        }
        if (choice == 3) break; // Tho�t kh?i v�ng l?p n?u l?a ch?n l� 3
    }

    return 0;
}
/*
1
2
nguyen van hai
8.5 5.5 7.5
tran van tuan
8.5 .50 9.0
2
2
tran van nam
5.5 5.0 6.0
3
*/

