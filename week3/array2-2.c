#include <stdio.h>
void print(int arr[10][10]) {
	for (int i = 0; i < 10; i++) {
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
}
int main() {
	int arr[10][10] = { {0} };
	
	print(arr);

	int row, col;
	printf("좌표를 입력하시오\n");
	scanf("%d%d", &row, &col);
	arr[row][col] = 1;
	print(arr);
}