/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 38
Date of submission - 16-09-2026*/
#include <stdio.h>
int main(){
 int n,sum=0,term;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 { term=0;
    for(int j=1;j<=i;j++)
    {
        term=(term*10)+1;
    }
    sum+=term;
 }
 printf("The sum of the series is: %d\n",sum);
 return 0;
}
