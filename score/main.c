#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //angular/long paranthesis for standard headers
#include "score.h"

int main(void) {
	FILE* fp; //FILE *fopen( const char * filename, const char * mode ); <<-- could also be done this way, it's how we open a file
	fp = fopen("scores.txt", "r");
	if (fp == NULL) {
		printf("Cannot open the file \n");
		return 1;
	}
	
	int score[MAX], count = 0, ts;

	while (fscanf(fp, "%d", &ts) == 1) { //scanf() for files = fscanf()
		score[count] = ts; //score[] = a[] , count = c, ts = a[c]
		count++;
		if (ts >= 60) printf("Yes\n");
	}
	fclose(fp); //The fclose() function is used to close a file. The file must be closed after performing all the operations on it.
	printf("scores before sorting \n", count);
	print_score(score, count);
	sort_score(score, count);
	printf("score sorted\n");
	print_score(score, count);
	printf("Median number is %d \n", score[count / 2]); // Any median method could be used
	printf("Average is %f\n", avg_score(score, count));
	int h[5] = { 0 };
	int COLORS[5] = { RED, YELLOW, BLUE, CYAN, GREEN };
	histogram(score, count,h);
	//setForeground(RED);
	printHistogram(score, count, h, COLORS);
	resetColors();
	return 0;
}


