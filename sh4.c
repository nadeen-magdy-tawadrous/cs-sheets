#include <stdio.h>

// 3) Write a C function that checks if an array is in an ascending order.
int isAscending(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        // Compare using offset notation [cite: 7, 10]
        if (*(arr + i) > *(arr + i + 1)) {
            return 0; // Not ascending
        }
    }
    return 1; // Is ascending
}

int main() {
    // --- Question 1: Max, Min, and Average [cite: 8] ---
    float arr1[10], sum1 = 0, max, min;
    float *ptr1 = arr1;

    printf("--- Question 1 ---\n");
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", (ptr1 + i)); // Pointer notation for input 
        sum1 += *(ptr1 + i);
    }

    max = min = *ptr1;
    for (int i = 1; i < 10; i++) {
        if (*(ptr1 + i) > max) max = *(ptr1 + i);
        if (*(ptr1 + i) < min) min = *(ptr1 + i);
    }
    printf("Max: %.2f, Min: %.2f, Average: %.2f\n\n", max, min, sum1 / 10);


    // --- Question 2: Search for 'z' [cite: 9] ---
    char arr2[10];
    char *ptr2 = arr2;
    int found = -1;

    printf("--- Question 2 ---\n");
    printf("Enter 10 characters: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", (ptr2 + i)); 
        if (*(ptr2 + i) == 'z') {
            found = i;
        }
    }
    if (found != -1)
        printf("Character 'z' found at position: %d\n\n", found);
    else
        printf("'z' was not found.\n\n");


    // --- Question 3: Test Ascending Function  ---
    int arr3[5] = {1, 3, 5, 8, 10};
    printf("--- Question 3 ---\n");
    if (isAscending(arr3, 5)) 
        printf("The test array is in ascending order.\n\n");
    else 
        printf("The test array is NOT in ascending order.\n\n");


    // --- Question 4: Sum of Even and Odd [cite: 11] ---
    int arr4[10], sumEven = 0, sumOdd = 0;
    int *ptr4 = arr4;

    printf("--- Question 4 ---\n");
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", (ptr4 + i));
        if (*(ptr4 + i) % 2 == 0) {
            sumEven += *(ptr4 + i);
        } else {
            sumOdd += *(ptr4 + i);
        }
    }
    printf("Sum of even: %d, Sum of odd: %d\n", sumEven, sumOdd);

    return 0;
}