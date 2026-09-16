/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 11
Date of submission - 16-09-2026*/
#include <stdio.h>
#include <math.h>
int fact(int p)
{ double facto=1;
    for(int i=1;i<=p;i++){
      facto*=i;
    }
    return facto;
}
int main()
{
    int n;
    float x;
    double sum1,sum2,m;
    printf("Enter value of x and n:");
    scanf("%f %d",&x, &n);
    sum1=x;
    sum2=1;
    for(int i=1;i<=n;i++)
    {
        int m=2*i+1;
        if(i%2==0)
        {
            sum1+=(pow(x,m)/fact(m));
        }
        else{
            sum1-=(pow(x,m)/fact(m));
        }
    }
     for(int i=1;i<=n;i++)
    {
        int m=2*i;
        if(i%2==0)
        {
            sum2+=(pow(x,m)/fact(m));
        }
        else{
            sum2-=(pow(x,m)/fact(m));
        }
    } 
    printf("Value of sinx is %lf:\n",sum1);
    printf("Value of cosx is %lf:\n",sum2);
    return 0;
}