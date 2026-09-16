/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 22
Date of submission - 16-09-2026*/
#include <stdio.h>
#include <math.h>
int main()
{
    int arr1[100],arr2[100];
    int num1,num2,div1=0,div2=0;
    int count=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
   for(int i=1;i<num1;i++)
    {   if(num1%i==0)
        {
            arr1[count]=i;
            count++;
        }
    }

    for(int i=0;i<count;i++)
    {
         div1+=arr1[i]; 
        printf("%d\t",arr1[i]);
    }
    count=0;
    for(int i=1;i<num2;i++)
    {   if(num2%i==0)
        {
            arr2[count]=i;
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        div2+=arr2[i]; 
        printf("%d\t",arr2[i]);
    }
    if(num1==div2 && num2==div1){
        printf("Amicable numbers");
    }
    else
       printf("Not amicable numbers");

return 0;
}