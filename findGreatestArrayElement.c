/*
    Write a program to find the greatest number stored in an array of size 10.
    Take array values from the user
*/

#include<stdio.h>

int main(){

    int array[10];
    int greatest;

    printf("Enter 10 values : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    greatest = array[0];

    for(int i = 1; i < 10; i++){
        if(array[i] > greatest)
            greatest = array[i];
    }

    printf("Greatest number in an array is %d", greatest);
    return 0;
}