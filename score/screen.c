#include <stdio.h>
#include "score.h"


void resetColors(void) {
	printf("\033[0m");
	fflush(stdout);
}
/*
void setForeground(int color) {
	printf("\033[%dm", color);
	fflush(stdout);
}*/

void setBackground(int color) {
	printf("\033[%dm", color + 10);
	fflush(stdout);
}
