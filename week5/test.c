#include <stdio.h>
#include <stdlib.h>
int main() {
	int *a = (int*)malloc(sizeof(int));
	*a = 20;
	printf("*a : %d\n", (*a));
	printf("a: %d\n", a);
	(*a)++;
	printf("*a : %d\n", *a);
	printf("a: %d\n", a);
	a++;
	printf("*a : %d\n", *a);
	printf("a: %d\n", a);
}