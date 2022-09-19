/* Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user */

#include<stdio.h>

int main(){

    int array[10], sum = 0;
    float avg;

    printf("Enter 10 values : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 10; i++){
        sum += array[i];
    }

    avg = sum / 10.0;

    printf("Average of numbers is %.2f", avg);
    return 0;
}