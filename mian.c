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

int main(){
    int marks[MAX_STUDENTS], choice, n=0;

    do{
        printf("\nStudent Score Analyser\n\n");
        printf("1. Input scores\n");
        printf("2. Display total and average\n");
        printf("3. Display highest and lowest scores\n");
        printf("4. Display median\n");
        printf("5. Display standard deviation\n");
        printf("6. Show grades\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                n = inputScores(marks);
                break;
            case 2:
                displayTotalAndAverage(marks, n);
                break;
            case 3:
                displayLowestAndHighest(marks, n);
                break;
            case 4:
                displayMedian(marks, n);
                break;
            case 5:
                displayStandardDeviation(marks, n);
                break;
            case 6:
                showGrades(marks, n);
                predictNextScore(marks, n);
                break;
            case 7:
                printf("Exiting. Thank you!");
                break;
            default:
                printf("Invalid Input. Try Again!");

        }
    }while(choice != 7);

    return 0;
}