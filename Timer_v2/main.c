#include "MainHeader.h"

int main(void) {
	SetColor(yellow);
	while (1) {
		Timer();
	} // Timer 함수 안에 Sleep(800) 있어서 0.8초+a 마다 작동합니다
}