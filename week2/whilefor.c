#include <stdio.h>
int main() {
	int num=0;
	printf("while-------------\n");
	while (num <= 10) {
		printf("%d\n", num);
		num++;
	}

	printf("For--------------\n");
	for (int i = 0; i <= 10; i++) {
		printf("%d\n", i);
	}

	return 0;
}