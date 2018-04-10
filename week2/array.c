#include <stdio.h>
int main() {
	//char str[5];
	char str[6];
	scanf("%s", str);

	for (int i = 0; i < 6; i++) {
		printf("str[%d]: %c\n",i,str[i]);
	}

	return 0;
}