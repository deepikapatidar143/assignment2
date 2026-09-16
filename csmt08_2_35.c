/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 15
Date of submission - 16-09-2026*/
# include <stdio.h>
int main()
{
    int r;
    printf("Enter number of rows");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     printf("\n");
    printf("Upside down triangle:\n");
    
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r+1-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}