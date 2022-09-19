/*
    Write a program to find the second smallest number stored in an array of size 10.
    Take array values from the user
*/

#include<stdio.h>

int main(){

    int array[10];
    int smallest1, smallest2;

    printf("Enter 10 values : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    smallest1 = array[0];
    smallest2 = 999999;

    for(int i = 1; i < 10; i++)
    {
        if(array[i] < smallest1)
        {
            smallest2 = smallest1;// 2 
            smallest1 = array[i];// 1
        }
        else{
            if(array[i] < smallest2)
                smallest2 = array[i]; // 2
        }
    }
    printf("Second smallest number in an array is %d", smallest2);
    return 0;
}