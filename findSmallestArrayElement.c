/*
    Write a program to find the smallest number stored in an array of size 10.
    Take array values from the user
*/

#include<stdio.h>

int main(){

    int array[10];
    int smallest;

    printf("Enter 10 values : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    smallest = array[0];

    for(int i = 1; i < 10; i++){
        if(array[i] < smallest)
            smallest = array[i];
    }

    printf("Smallest number in an array is %d", smallest);
    return 0;
}