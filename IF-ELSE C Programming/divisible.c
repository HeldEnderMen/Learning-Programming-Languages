#include<stdio.h>

//Program to test if an integer is divisible by 5 and/or 11
int main() {
    int num;

    printf("Please entera number: ");
    scanf("%d", &num);

    if(num==55)
        printf("The number 55 is Divisible by 5 & 11!\n", num);
    else if(num%5 == 0) 
        printf("The number %d is Divisible by 5\n", num);
    else if (num%11 == 0)
        printf("The number %d is Divisible by 11\n", num);
    else 
        printf("The number %d is not divisible by 5 nor 11!\n", num);
}