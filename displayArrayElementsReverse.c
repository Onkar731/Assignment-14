/*
    Write a program in c to read n number of values in an array and
    display it in reverse order. Take values from the user
*/

#include<stdio.h>

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d values : ", n);

    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    while(n--)
        printf("%d ", array[n]);

    return 0;
}