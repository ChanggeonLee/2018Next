#include <stdio.h>
void oddnum(int num) {
	if (num <= 0) {
		return;
	}
	else if (num % 2 != 0) {
		printf("%d ", num);
	}
	oddnum(num - 1);
}
int main() {
	oddnum(11);
	printf("\n");
	oddnum(10);
}