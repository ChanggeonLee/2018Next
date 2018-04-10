#include <stdio.h>
int main() {
	int grade; //성적

	printf("성적을 입력하시오.\n");
	scanf("%d", &grade);

	if (grade >= 90) {
		printf("A\n");
	}
	else if (grade >= 80) {
		printf("B\n");
	}
	else if (grade >= 70) {
		printf("C\n");
	}
	else if (grade >= 60) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}

	return 0;
}