#include <stdio.h>
int main() {
	int num; //입력 값

	printf("1~4사이의 수를 입력하세요.");
	scanf("%d", &num);

	switch(num){
		case 1: printf("안녕하세요.\n"); break;
		case 2: printf("안녕히게세요.\n"); break;
		case 3: printf("만나서 반갑습니다\n"); break;
		case 4: printf("오랜만입니다.\n"); break;
		default:printf("1~4사이의 값을 입력하세요\n");
	}

	return 0;
}