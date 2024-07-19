#include <stdio.h>

struct sinhvien {
	int id;
	char name[100];
	float score1, score2, score3;
};

typedef struct sinhvien Student;

Student students[100];
int studentCount = 0;

void add() {
	int numberOfStudents;
	scanf("%d", &numberOfStudents);
	printf("%d\n", numberOfStudents);
	while(numberOfStudents--) {
		getchar();
		students[studentCount].id = studentCount + 1;
		gets(students[studentCount].name);
		scanf("%f%f%f", &students[studentCount].score1, &students[studentCount].score2, &students[studentCount].score3);
		++studentCount;
	}
}

void update() {
	int studentIndex;
	scanf("%d", &studentIndex);
	getchar();
	printf("%d\n", studentIndex);
	gets(students[studentIndex - 1].name);
	scanf("%f%f%f", &students[studentIndex - 1].score1, &students[studentIndex - 1].score2, &students[studentIndex - 1].score3);
}

void sort() {
	for(int i = 0; i < studentCount - 1; i++) {
		for(int j = i + 1; j < studentCount; j++) {
			if((students[i].score1 + students[i].score2 + students[i].score3) > (students[j].score1 + students[j].score2 + students[j].score3)) {
				Student temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}
	for(int i = 0; i < studentCount; i++) {
		printf("%d %s %.1f %.1f %.1f\n", students[i].id, students[i].name, students[i].score1, students[i].score2, students[i].score3);
	}
}

int main() {
	int choice;
	while(1) {
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				add();
				break;
			case 2:
				update();
				break;
			case 3:
				sort();
				break;
		}
		if(choice == 3) break;
	}
	return 0;
}

