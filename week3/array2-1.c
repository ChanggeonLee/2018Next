#include <stdio.h>
int main() {
	int arr[10][10] = { {0} };
	for (int i = 0; i < 10; i++) {
		for (int n = 0; n < 10; n++) {
			if (arr[i][n] == 0) {
				printf("* ");
			}
		}
		printf("\n");
	}
}