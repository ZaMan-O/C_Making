#include "MainHeader.h"

// �ð��� ���ؼ� PrintNumber �Լ��� ��,��,�ʸ� ������ �����ϴ�

void Timer() {
	DWORD dw;
	COORD coord;
	time_t timer;
	struct tm* t;
	
	time_t prev_Time = time(NULL);

	int text_color = yellow; // �۾� ����
	int bg_color = gold; // ��� ����
	while (1) {
		Sleep(100);
		if (prev_Time != time(NULL)) {
			prev_Time = time(NULL);

			timer = time(NULL);
			t = localtime(&timer);

			system("cls");

			SetColor(text_color, bg_color);
			printf("\n\n\n\n\n\n\n\n");
			// �⵵/��/�� ���
			printf("                        ");
			SetColor(light_aqua, blue);
			printf(" %d / %02d / %02d ", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
			SetColor(0, 0);
			printf("\n\n");
			SetColor(text_color,bg_color); // ù��° �۾����� , �ι�° ������
			printf("                        ");
			PrintNumber(t->tm_hour, t->tm_min, t->tm_sec);
		}
	}
}