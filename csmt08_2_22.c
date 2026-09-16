/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 22
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=0;i<4;i++)
    {
       sum +=num%10;
       num = num/10;
  }
  printf("Sum of all digit of a number is %d\n:",sum);
return 0;
}