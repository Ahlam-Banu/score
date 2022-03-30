#pragma once
#define MAX 50
// this project now has 3 user defined functions
enum COLORS { BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
void sort_score(int a[], int c);
void print_score(int a[], int c);
double avg_score(int a[], int c);
void resetColors(void);
//void setForeground(int);
void setBackground(int);
void printHistogram(int a[], int c, int h[], int COLORS[]);
void histogram(int a[], int c, int h[]);
