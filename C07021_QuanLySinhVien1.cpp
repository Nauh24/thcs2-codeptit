#include <stdio.h>

struct sinhvien{
	int id;
	char name[100];
	float a, b, c;
};

typedef struct sinhvien SV;

SV s[100];
int cnt = 0;

// Hàm thêm sinh viên m?i
void addStudents() {
    int n;
    scanf("%d", &n);
    while (n--) {
        getchar(); // Ð?c kí t? '\n' sau khi nh?p s? lu?ng sinh viên
        s[cnt].id = cnt + 1;
        gets(s[cnt].name); // Ð?c tên sinh viên
        scanf("%f%f%f", &s[cnt].a, &s[cnt].b, &s[cnt].c); // Ð?c di?m môn A, B, C
        cnt++;
    }
}

// Hàm c?p nh?t thông tin sinh viên theo mã sinh viên
void updateStudent() {
    int studentIndex;
    scanf("%d", &studentIndex);
    getchar(); // Ð?c kí t? '\n' sau khi nh?p mã sinh viên

    if (studentIndex > 0 && studentIndex <= cnt) {
        gets(s[studentIndex - 1].name); // C?p nh?t tên sinh viên
        scanf("%f%f%f", &s[studentIndex - 1].a, &s[studentIndex - 1].b, &s[studentIndex - 1].c); // C?p nh?t di?m môn A, B, C
    }
}

// Hàm s?p x?p danh sách sinh viên theo t?ng di?m tang d?n
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
        if (choice == 3) break; // Thoát kh?i vòng l?p n?u l?a ch?n là 3
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

