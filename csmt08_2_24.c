/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 4
Date of submission - 16-09-2026*/
#include <stdio.h>
int main(){
    int num1;
    int sum=1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    if(num1==0)
    printf("Neither poaitive nor negative:");
    else if(num1>0)
    printf("Positive number\n");
    else
    {
    printf("Negative number\n");
    num1=num1*(-1);
    }
    printf("Absolute value of no is:%d\n",num1);
    while(num1!=0)
    {
       sum *= num1%10;
       num1 = num1/10; 
    }
    if(sum>1000)
    printf("Multiplication of digits is greater than thousand");
    else
    printf("Multiplication of digits is not greater than thousand ");
    return 0;

}