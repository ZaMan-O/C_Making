#include "MainHeader.h"

// �ܼ��� �ٹ̱����� �ܼ� ������ ���Ҽ��ְ� �߽��ϴ�
// MainHeader.h�� ���������� ���� �´� ���� �����ص׽��ϴ�

void SetColor(int text_color,int bg_color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), bg_color * 16 + text_color);
}