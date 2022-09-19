/* 
   Write a program to calculate the sum of all even numbers and sum of all odd numbers 
   stored in an array of size 10. Take array values from the user 
*/

#include<stdio.h>

int main(){

    int array[10], Esum = 0, Osum = 0;

    printf("Enter 10 values : ");
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 10; i++){
        if(array[i] % 2){
            Osum += array[i];
        }
        else{
            Esum += array[i];
        }
    }

    printf("Sum of all EVEN numbers is %d\nSum of all ODD numbers is %d", Esum, Osum);
    return 0;
}