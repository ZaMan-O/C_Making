#include "MainHeader.h"

// 시간을 구해서 PrintNumber 함수로 시,분,초를 나눠서 보냅니다

void Timer() {
	DWORD dw;
	COORD coord;
	time_t timer;
	struct tm* t;
	
	time_t prev_Time = time(NULL);

	int text_color = yellow; // 글씨 색깔
	int bg_color = gold; // 배경 색깔
	while (1) {
		Sleep(100);
		if (prev_Time != time(NULL)) {
			prev_Time = time(NULL);

			timer = time(NULL);
			t = localtime(&timer);

			system("cls");

			SetColor(text_color, bg_color);
			printf("\n\n\n\n\n\n\n\n");
			// 년도/월/일 출력
			printf("                        ");
			SetColor(light_aqua, blue);
			printf(" %d / %02d / %02d ", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
			SetColor(0, 0);
			printf("\n\n");
			SetColor(text_color,bg_color); // 첫번째 글씨색깔 , 두번째 배경색깔
			printf("                        ");
			PrintNumber(t->tm_hour, t->tm_min, t->tm_sec);
		}
	}
}