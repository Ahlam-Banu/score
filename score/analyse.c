#include <stdio.h>
#include "score.h" 

double avg_score(int a[], int c) { //function to find Average score
	double sum = 0.0;
	for (int i = 0; i < c; i++) sum += a[i];
	return sum / c;

}
void sort_score(int a[], int c) { //function to sort the array
	for (int i = 0; i < c - 1; i++) {
		for (int j = 0; j < c - i - 1; j++) {
			if (a[j] > a[j + 1]) {// we are going to swap two numbers if the first one is greater than the second one
				int temp = a[j]; //because arranging in ascending order
				a[j] = a[j + 1]; //swapping is done in these three lines
				a[j + 1] = temp;
			}

		}
	}
}


void histogram(int a[], int c, int h[]) {
	for (int i = 0; i < c; i++) {
		//printf("%d ", a[i]);
		if (0 < a[i] && a[i] < 20) {
			h[0]++;
		}
		if (20 < a[i] && a[i] < 40) {
			h[1]++;

		}
		if (40 < a[i] && a[i] < 60) {
			h[2]++;

		}
		if (60 < a[i] && a[i] < 80) {
			h[3]++;
		}
		if (80 < a[i] && a[i] < 100) {
			h[4]++;

		}
	}
}
