/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 41
Date of submission - 16-09-2026*/
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter size of set: ");
    scanf("%d",&n);
    int arr[n];
    float mean, variance ,standard_deviation;
    int sum=0;
    printf("Enter elements in set:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    mean=sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(arr[i]-mean)*(arr[i]-mean);
    }
    variance=sum/n;
    standard_deviation=sqrt(variance);
    printf("Mean is %f\n",mean);
    printf("Variance is %f\n",variance);
    printf("Standard deviation is %f\n",standard_deviation);
    return 0;
}