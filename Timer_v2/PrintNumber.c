#include "MainHeader.h"

// NumberArray 배열에 있는 숫자를 이용하여 1이면 네모, 0이면 공백을 출력하는 곳입니다.

void PrintNumber(int h,int m,int s) {
	int h_10 = h/10, h_1 = h%10;
	int m_10 = m/10, m_1 = m%10;
	int s_10 = s/10, s_1 = s%10;

	_setmode(_fileno(stdout), _O_U16TEXT);

	for (int i = 0;i < 10;i++) {
		// 시간 부분 출력

		// 1이면 네모 아니면 공백출력
		for (int ii = 0;ii < 6;ii++) NumberArray[h_10][i][ii] ? wprintf(L"██") : wprintf(L"  ");
		wprintf(L"  ");
		for (int ii = 0;ii < 6;ii++) NumberArray[h_1][i][ii] ? wprintf(L"██") : wprintf(L"  ");
		// 세로줄이 2,3,6,7번째면 15:00:00 이것처럼 숫자 사이에 있는 :을 출력하기 위해 적었습니다
		if (i == 2 || i == 3 || i == 6 || i == 7) wprintf(L"   ████   "); else wprintf(L"          ");

		// 분 부분 출력
		for (int ii = 0;ii < 6;ii++) NumberArray[m_10][i][ii] ? wprintf(L"██") : wprintf(L"  ");
		wprintf(L"  ");
		for (int ii = 0;ii < 6;ii++) NumberArray[m_1][i][ii] ? wprintf(L"██") : wprintf(L"  ");
		if (i == 2 || i == 3 || i == 6 || i == 7) wprintf(L"   ████   "); else wprintf(L"          ");

		// 초 부분 출력
		for (int ii = 0;ii < 6;ii++) NumberArray[s_10][i][ii] ? wprintf(L"██") : wprintf(L"  ");
		wprintf(L"  ");
		for (int ii = 0;ii < 6;ii++) NumberArray[s_1][i][ii] ? wprintf(L"██") : wprintf(L"  ");

		// 가로줄 출력 완료했으니 다음줄로 넘어가기
		wprintf(L"\n                      ");
	}
	_setmode(_fileno(stdout), _O_TEXT);
}