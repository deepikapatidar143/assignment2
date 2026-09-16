/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 47
Date of submission - 16-09-2026*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Prime factors of n are:\t");
    for(int i=2;i<=n/2;i++)
    {  int count=1;
       if(n%i==0){
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0){
                count++;
            }
        }
          if(count==1)
          printf("%d\t",i);

       }
    }
    return 0;
}
