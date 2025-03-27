#include "MainHeader.h"

// 시간을 구해서 PrintNumber 함수로 시,분,초를 나눠서 보냅니다

void Timer() {
	DWORD dw;
	COORD coord;
	time_t timer;
	struct tm* t;
	
	timer = time(NULL);
	t = localtime(&timer);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n"); // 공백 출력
	Sleep(800);
	system("cls");
	printf("                      ");
	PrintNumber(t->tm_hour,t->tm_min,t->tm_sec);
}