#include "MainHeader.h"

// �ð��� ���ؼ� PrintNumber �Լ��� ��,��,�ʸ� ������ �����ϴ�

void Timer() {
	DWORD dw;
	COORD coord;
	time_t timer;
	struct tm* t;
	
	timer = time(NULL);
	t = localtime(&timer);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n"); // ���� ���
	Sleep(800);
	system("cls");
	printf("                      ");
	PrintNumber(t->tm_hour,t->tm_min,t->tm_sec);
}