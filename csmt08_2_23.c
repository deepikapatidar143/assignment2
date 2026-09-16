/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 23
Date of submission - 16-09-2026*/
#include <stdio.h>
#include <math.h>
int isTriangular(int n)
{
    int root,m;
    m=8*n+1;
    root=sqrt(m);
    if((root*root)==(m))
    {
        printf("Valid triangular number\n");
    }
    else{
        printf("Invalid triangular number\n");
    }
    return 0;


}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    isTriangular(n);
    return 0;
}
