#include "MainHeader.h"

// �ܼ��� �ٹ̱����� �ܼ� ������ ���Ҽ��ְ� �߽��ϴ�
// MainHeader.h�� ���������� ���� �´� ���� �����ص׽��ϴ�

void SetColor(int num) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), num);
}