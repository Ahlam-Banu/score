#include "score.h"
#include <stdio.h>

void print_score(int a[], int c) { //function to print array
	for (int i = 0; i < c; i++) {
		printf("%6d", a[i]);
		if ((i + 1) % 3 == 0) printf("\n"); //This command is used so that we have 3 colums when we display all the numbers of the array
	}
	printf("\n\n");
}

void printHistogram(int a[], int c, int h[], int COLORS[]) {
	printf("\n\t Histogram of Scores \n");

	for (int i = 0; i < 5; i++) {
		//setForeground(COLORS[i]);
		printf("(%3d-%3d) %2d ", i*20, i*20+20, h[i]);
		setBackground(COLORS[i]);
		for (int j = 0; j < h[i]; j++) printf(" ");
		resetColors();
		printf("\n");
	}
}