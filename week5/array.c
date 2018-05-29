#include <stdio.h>

void reverse(int *arr,int size) {
	for (int i = 0; i <= size / 2; i++&size--) {
		int temp = arr[i];
		arr[i] = arr[size - 1];
		arr[size - 1] = temp;
	}
}
int main() {
	int arr[6] = { 1,2,3,4,5,6 };
	printf("Àü:\n");
	for (int i = 0; i < 6; i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}

	reverse(arr,6);

	printf("ÈÄ:\n");
	for (int i = 0; i < 6; i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
}