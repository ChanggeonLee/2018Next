#include <stdio.h>
typedef struct student{
	int stunum;
	char name[20];
	char master[20];
}Stu;

int main() {
	Stu s[3];

	for (int i = 0; i < 3; i++) {
		printf("�й� �̸� �а��� ������� �Է��Ͻÿ� \n");
		scanf("%d%s%s", &s[i].stunum, s[i].name, s[i].master);
	}

	for (int i = 0; i < 3; i++) {
		printf("�й� : %d �̸� : %s �а� : %s\n", s[i].stunum, s[i].name, s[i].master);
	}
	return 0;
}