/*
    Write a program to find the second largest number stored in an array of size 10.
    Take array values from the user
*/

#include<stdio.h>

int main(){

    int array[10];
    int largest1, largest2;

    printf("Enter 10 values : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    largest1 = largest2 = array[0];

    for(int i = 1; i < 10; i++){
        if(array[i] > largest1){
            largest2 = largest1;
            largest1 = array[i];  
        }
        else
            if(array[i] > largest2)
                largest2 = array[i];
    }

    printf("Second largest number in an array is %d", largest2);
    return 0;
}