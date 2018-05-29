#include <stdio.h>
#include <stdlib.h>
int main() {
	int *arr = (int*)malloc(sizeof(int) * 5);

	int *temp = arr;

	for (int i = 0; i < 5; i++) {
		scanf("%d", temp);
		temp++;
	}

	for (int i = 0; i < 5; i++) {
		printf("arr[%d] : %d\n", i, *arr);
		arr++;
	}
}