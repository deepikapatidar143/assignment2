/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 40
Date of submission - 16-09-2026*/
#include <stdio.h>
void selection_sort(int arr[],int p)
{
    for(int i=0; i<p-1;i++){
        int pos=i;
    for(int j=i+1;j<p;j++)
    {
        if(arr[j]<arr[pos])
          pos=j;
    }
    int temp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=temp;
    }
}
int main()
{   int n,m;
    printf("Enter value of n and m :");
    scanf("%d %d",&n,&m);
    int arr1[n],arr2[m];
    printf("Enter value of arr1\t");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n");
    printf("Enter value of arr2\t");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    selection_sort(arr1,n);
    selection_sort(arr2,m);
    int arr_final[m+n];
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr_final[k]=arr1[i];
            i++;
        }
        else{
            arr_final[k]=arr2[j];
            j++;
     }
          k++;
    }
    if(i<n)
    {
        while(i<n){
            arr_final[k]=arr1[i]; 
            i++;
            k++;      
         }
        }

         if(j<m)
    {
        while(j<m){
            arr_final[k]=arr2[j]; 
            j++;
            k++;      
         }
        
    }
 for(i=0;i<m+n;i++)
 {
    printf("%d\t",arr_final[i]);
 }
 return 0;       
}
