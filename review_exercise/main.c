#include <stdio.h>

// Function to check if a number is divisible by 5 and 11
void checkDivisibility(int num) {
    if (num % 5 == 0 && num % 11 == 0) {
        printf("%d is divisible by 5 and 11.\n", num);
    } else {
        printf("%d is not divisible by 5 and 11.\n", num);
    }
}

// Function to calculate the sum of all numbers between 1 and N using FOR
int sumWithFor(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Function to calculate the sum of all numbers between 1 and N using WHILE
int sumWithWhile(int n) {
    int sum = 0, i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

// Function to find the largest value in an array
int findLargest(int array[], int size) {
    int largest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}

// Recursive function to print natural numbers in a given range
void printNaturals(int start, int end) {
    if (start <= end) {
        printf("%d ", start);
        printNaturals(start + 1, end);
    }
}

// Function to swap two numbers using pointers
void swapNumbers(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num;
    printf("Enter a number to check its divisibility by 5 and 11: ");
    scanf("%d", &num);
    checkDivisibility(num);

    int n;
    printf("Enter a value for N: ");
    scanf("%d", &n);
    printf("Sum using FOR: %d\n", sumWithFor(n));
    printf("Sum using WHILE: %d\n", sumWithWhile(n));

    int array[] = {3, 7, 1, 9, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Largest value in the array: %d\n", findLargest(array, size));

    printf("Natural numbers from 1 to 10: ");
    printNaturals(1, 10);
    printf("\n");

    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapNumbers(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
