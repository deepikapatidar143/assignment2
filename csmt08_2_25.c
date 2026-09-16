/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 25
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{ int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2==0)
    printf("Number is divisible by 2\n");
    if(num%3==0)
    printf("Number is divisible by 3\n");
    if(num%4==0)
    printf("Number is divisible by 4\n");
    if(num%12==0)
    printf("Number is divisible by 12\n");
return 0;

}