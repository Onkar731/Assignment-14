/*
    Write a program to sort elements of an array of size 10.
    Take array values from the user
*/

#include<stdio.h>

int main(){

    int array[10];

    printf("Enter 10 values : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    // sorting logic - Bubble sort

    for(int pass = 1; pass < 10; pass++)
    {
        for(int i = 0; i < 10 - pass; i++)
        {
            if(array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    // printing array after sorting

    for(int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}