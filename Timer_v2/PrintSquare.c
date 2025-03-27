#include "MainHeader.h"

// 이거 쓸려다가 결국 이 코드에 한번도 안쓰게 됐습니다..

void PrintSquare(int num) {
	_setmode(_fileno(stdout), _O_U16TEXT);
	wprintf(L"██");
	_setmode(_fileno(stdout), _O_TEXT);
}