/*
    Write a program in C to copy the elements of one array into another array.
    Take array values from the user
*/

#include<stdio.h>

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    int array1[n], array2[n];

    printf("Enter %d values : ", n);

    for(int i = 0; i < n; i++)
        scanf("%d", &array1[i]);

    // logic for coping array

    for(int i = 0; i < n; i++)
        array2[i] = array1[i];

    // printing array2 values

    printf("Second Array Elements : ");
    for(int i = 0; i < n; i++)
        printf("%d ", array2[i]);

    return 0;
}