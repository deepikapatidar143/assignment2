/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 8
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{
    int n,a,b,c=0;
    a=0;
    b=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    if(n==1){
        printf("nth term is of fibonacci is %d\n: ",a);
     }
     if(n==2)
     {
        printf("nth term is of fibonacci is %d\n: ",b);

     }
   if(n>=3)
   {
   for(int i=3;i<=n;i++)
   {
    c=a+b;
    a=b;
    b=c;
    
   }
   printf("nth term is of fibonacci is %d\n: ",c);
}

}