/* Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user */

#include<stdio.h>

int main(){

    int array[10], sum = 0;

    printf("Enter 10 values : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 10; i++){
        sum += array[i];
    }

    printf("Sum of numbers is %d", sum);
    return 0;
}