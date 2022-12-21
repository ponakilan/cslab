/*
 * Finding the prime numbers between the range 1 to given number
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int i, num, n, count;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the range from the user
    printf("Enter the range:");
    scanf("%d", &n);

    //Finding the prime numbers between 1 and given number
    printf("The prime numbers in between the range 1 to %d:", n);
    for(num = 1;num<=n;num++){
        count = 0;

        //Iterating from 1 to given number
        for(i=2;i<=num/2;i++){
            // If num is divisible by the value of i, break the loop
            if(num%i==0){
                count++;
                break;
            }
        }
        if(count==0 && num!= 1) //If the given number is not divisible by any numbers between 2 and itself, then print the number
            printf(" %d",num);
    }
    return 0; //Returning an integer
}