#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_STUDENTS 100

int inputScores(int marks[]);
void displayTotalAndAverage(int marks[], int n);
void displayLowestAndHighest(int marks[], int n);
void displayMedian(int marks[], int n);
void displayStandardDeviation(int marks[], int n);
void showGrades(int marks[], int n);
void predictNextScore(int marks[], int n);