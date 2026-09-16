/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 34
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {   if(k%2==0)
            printf("A");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}