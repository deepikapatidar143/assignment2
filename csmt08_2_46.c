/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 46
Date of submission - 16-09-2026*/
#include<stdio.h>
int main()
{ int divisor,divident,remainder,quotient;
    printf("Enter value of Divisor and Divident: ");
    scanf("%d %d",&divisor,&divident);
    quotient=divisor/divident;
    remainder=divisor%divident;
    printf("Quotient is %d\n",quotient);
    printf("Remainder is %d\n",remainder);
    return 0;
}