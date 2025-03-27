#include "MainHeader.h"

int main(void) {
	time_t timer;
	struct tm* t;
	
	timer = time(NULL);
	t = localtime(&timer);

	printf("%d/%02d/%02d\n\n",
		t->tm_year + 1900,
		t->tm_mon + 1,
		t->tm_mday);

	printf("%02d:%02d:%02d",
		t->tm_hour,
		t->tm_min,
		t->tm_sec);
}