#include <stdio.h>
typedef struct student{
	int stunum;
	char name[20];
	char master[20];
}Stu;

int main() {
	Stu s[3];

	for (int i = 0; i < 3; i++) {
		printf("학번 이름 학과를 순서대로 입력하시오 \n");
		scanf("%d%s%s", &s[i].stunum, s[i].name, s[i].master);
	}

	for (int i = 0; i < 3; i++) {
		printf("학번 : %d 이름 : %s 학과 : %s\n", s[i].stunum, s[i].name, s[i].master);
	}
	return 0;
}