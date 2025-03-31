#include "MainHeader.h"

// 콘솔을 꾸미기위해 콘솔 색깔을 정할수있게 했습니다
// MainHeader.h에 열거형으로 색깔에 맞는 숫자 정리해뒀습니다

void SetColor(int text_color,int bg_color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), bg_color * 16 + text_color);
}