#include <stdio.h>
typedef struct square{
	int x;
	int y;
	int size;
}SQU;
int main() {
	SQU s1;
	int arr[10][10] = { {0} };
	
	printf("x좌표,y좌표,크기를 순서대로 입력하시오\n");
	scanf("%d%d%d", &s1.x, &s1.y, &s1.size);

	for (int i = 0; i < s1.size; i++) {
		for (int n = 0; n< s1.size; n++) {
			arr[s1.x + i][s1.y + n] = 1;
		}
	}

	for (int i = 0; i <10; i++) {
		for (int n = 0; n < 10; n++) {
			if (arr[i][n] == 0) {
				printf("* ");
			}
			else {
				printf("+ ");
			}
		}
		printf("\n");
	}

	return 0;
}