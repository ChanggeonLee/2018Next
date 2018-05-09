#include <stdio.h>
//구조체 작성 (이름, 생명력,공격력, 형태)

//몬스터를 그려주는 함수 
void drawShape(int num) {
	int shape1[6][7] = { { 0,1,0,0,0,1,0 },
	{ 0,0,1,1,1,0,0 },
	{ 0,1,0,1,0,1,0 },
	{ 0,1,1,1,1,1,0 },
	{ 1,0,1,0,1,0,1 },
	{ 1,0,1,0,1,0,1 } };

	int shape2[8][8] = { { 0,0,1,0,1,0,0,0 },
	{ 0,1,1,1,1,1,0,0 },
	{ 0,1,0,1,0,1,1,0 },
	{ 1,1,1,1,1,1,0,1 },
	{ 0,0,0,0,1,1,1,1 },
	{ 0,1,1,1,1,1,1,0 },
	{ 0,0,1,1,1,1,0,0 },
	{ 0,0,0,1,0,1,0,0 } };

	switch (num) {
	case 1:
		for (int i = 0; i<6; i++) {
			for (int n = 0; n<7; n++) {
				if (shape1[i][n] == 0) {
					printf("□");
				}
				else {
					printf("■");
				}
			}
			printf("\n");
		}
		break;
	case 2:
		for (int i = 0; i<8; i++) {
			for (int n = 0; n<8; n++) {
				if (shape2[i][n] == 0) {
					printf("□");
				}
				else {
					printf("■");
				}
			}
			printf("\n");
		}
		break;
	default:
		printf("error,1혹은 2가 들어 가야합니다.\n");
		break;
	}

}

// 몬스터의 정보를 출력해주는 함수
void showMonster(/*구조체변수를 파라메터로 받아와야한다.*/) {

}

int main() {
	// 몬스터에 대한 구조체를 선언 

	// 초기화

	//몬스터의 정보를 출력해준다.
	showMonster(/*구조체변수를 넣어주어야 한다.*/);

	drawShape(1);
	printf("\n\n");
	drawShape(2);
}