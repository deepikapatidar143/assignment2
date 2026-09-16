/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 39
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter value of m and n: ");
    scanf("%d\n %d",&m,&n);
     for(int i=1; i<=m;i++)
    {
        printf("*");
    }
      printf("\n"); 
     for(int k=1;k<=n-2;k++)
    {
         for(int j=1;j<=m;j++)
        {    if(j==1 || j==m)
            printf("*");
            else 
            printf(" ");
        } 
        printf("\n");
    } 
    for(int i=1; i<=m;i++)
    {
        printf("*");
    }
      printf("\n"); 
    return 0;
}