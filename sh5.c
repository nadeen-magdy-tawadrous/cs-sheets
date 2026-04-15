#include <stdio.h>
#include <stdbool.h>
// 1) Function/Logic to check array status
void checkArrayStatus() {
    int arr[10];
    int *ptr = arr;
    bool inc = false, dec = false;

    printf("--- Question 1 ---\n");
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < 9; i++) {
        if (*(ptr + i + 1) > *(ptr + i)) inc = true;
        if (*(ptr + i + 1) < *(ptr + i)) dec = true;
    }

    if (inc && !dec) 
        printf("Result: the numbers in the array are increasing\n");
    else if (!inc && dec) 
        printf("Result: the numbers in the array are decreasing\n");
    else if (!inc && !dec) 
        printf("Result: the numbers in the array are not changing\n");
    else if (inc && dec) 
        printf("Result: the numbers in the array are increasing and then decreasing.\n");
}

int main() {
    checkArrayStatus();

    /*
    2) TRACING OUTPUT QUESTION
    
    [Section A Output]:
    [c], [20], [1.200000], [I], [I am a string]

    [Section B Output]:
    2
    9
    10
    10
    */

    return 0;
}