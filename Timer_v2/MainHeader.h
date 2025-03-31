#ifndef MAINHEADER
#define MAINHEADER

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <fcntl.h>
//#include <io.h>
#include <wchar.h>
#include <time.h>
#include <string.h>
//#include <conio.h>
#include <stdbool.h>

void SetColor(int text_color,int bg_color);
void Timer();
void PrintNumber(int h,int m,int s);
void PrintSquare();

int NumberArray[10][10][6];

extern enum Color { // SetColor(red) 이런식으로 쓸수있게 열거형 만들었습니다
	red = 4,
	light_red = 12,
	gold = 6,
	yellow = 14,
	green = 2,
	light_green = 10,
	light_aqua = 11,
	aqua = 3,
	light_blue = 9,
	blue = 1,
	purple = 5,
	light_purple = 13,
	white = 7,
	gray = 8,
	black = 0,
	light_white = 15
};

#endif // !MAINHEADER