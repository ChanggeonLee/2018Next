#include <stdio.h>
int main() {
	int num; //�Է� ��

	printf("1~4������ ���� �Է��ϼ���.");
	scanf("%d", &num);

	switch(num){
		case 1: printf("�ȳ��ϼ���.\n"); break;
		case 2: printf("�ȳ����Լ���.\n"); break;
		case 3: printf("������ �ݰ����ϴ�\n"); break;
		case 4: printf("�������Դϴ�.\n"); break;
		default:printf("1~4������ ���� �Է��ϼ���\n");
	}

	return 0;
}