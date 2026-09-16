/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 27
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{
    int num,mul_even,mul_odd,sum;
    mul_odd =1;
    mul_even=1;
    printf("Enter a four digit number ");
    scanf("%d",&num);
    
    mul_even = num%10;
    num=num/10;
    mul_odd = num%10;
    num=num/10;
    mul_even *= num%10;
    num=num/10;
    mul_odd *= num%10;
    sum = mul_odd + mul_even;
    printf("Result is :%d\n",sum);
return 0;

}