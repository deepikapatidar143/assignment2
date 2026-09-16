/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 50
Date of submission - 16-09-2026*/
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter value of n and m:");
    scanf("%d\t %d",&n,&m);
    int arr[n][m];
    printf("Enter a matrix :");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    if(n!=m)
    printf("Invalid matrix");
    else{
    for(int i=0;i<n;i++)
    {
          int temp=arr[i][i];
          arr[i][i]=arr[i][n-1-i];
          arr[i][n-1-i]=temp;
    }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

return 0;
}