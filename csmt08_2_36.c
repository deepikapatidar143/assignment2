/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 16
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{
    int num,rev=0,rem=0,diff,sum=0,num1;
    printf("Enter number between 1 to 1000");
    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {
     rem=num%10;
     rev = rev*10 + rem;
     num=num/10;
    }
   if(num1>rev)
    {
      diff=num1-rev;
    }
    else 
    {
      diff=rev-num1;
    }
   while(num1!=0)
    {  sum+=num1%10;
        num1=num1/10;
    }
    if(sum==diff)
    {
        printf("Number and it's reverse difference is equal to sum of it's digits ");
    }
    else
    {
        printf("Number and it's reverse difference is  not equal to sum of it's digits ");
    }
    return 0;
}