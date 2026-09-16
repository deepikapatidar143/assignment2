/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 45
Date of submission - 16-09-2026*/
#include <stdio.h>
void Set_union(int arr_final[], int k) {
    printf("Union is: ");
    for (int i = 0; i < k; i++) {
        int dup = 0;
        for (int j = 0; j < i; j++) {
            if (arr_final[i] == arr_final[j]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            printf("%d ", arr_final[i]);
        }
    }
    printf("\n");
}
void Set_intersection(int arr_final[], int n, int m) {
    printf("Intersection is: ");
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int k = 0; k < i; k++) {
            if (arr_final[i] == arr_final[k]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            for (int j = n; j < n + m; j++) {
                if (arr_final[i] == arr_final[j]) {
                    printf("%d ", arr_final[i]);
                    break;
                }
            }
        }
    }
    printf("\n");
}
void Set_difference_A_B(int arr_final[], int n, int m) {
    printf("A - B is: ");
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int k = 0; k < i; k++) {
            if (arr_final[i] == arr_final[k]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            int foundInB = 0;
            for (int j = n; j < n + m; j++) {
                if (arr_final[i] == arr_final[j]) {
                    foundInB = 1;
                    break;
                }
            }
            if (!foundInB) {
                printf("%d ", arr_final[i]);
            }
        }
    }
    printf("\n");
}
void Set_difference_B_A(int arr_final[], int n, int m) {
    printf("B - A is: ");
    for (int i = n; i < n + m; i++) {
        int dup = 0;
        for (int k = n; k < i; k++) {
            if (arr_final[i] == arr_final[k]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            int foundInA = 0;
            for (int j = 0; j < n; j++) {
                if (arr_final[i] == arr_final[j]) {
                    foundInA = 1;
                    break;
                }
            }
            if (!foundInA) {
                printf("%d ", arr_final[i]);
            }
        }
    }
    printf("\n");
}


int main()
{  
    int n,m;
    printf("Enter size of both the array:");
    scanf("%d %d",&n,&m);
    int arr_a[n],arr_b[m];
    int arr_final[n+m];
    int j=0,i=0;
    printf("Element of arr_a: ");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr_a[i]);
    }
    printf("\n");
    printf("Element of arr_b: ");
    for(int i=0;i<m;i++)
    {
      scanf("%d",&arr_b[i]);
    }
     while(i<n)
   {
    arr_final[j]=arr_a[i];
    i++;
    j++;
   }
    i=0;
   while(i<m)
   {
    arr_final[j]=arr_b[i];
    i++;
    j++;
   }
    Set_union(arr_final,n+m);
    Set_intersection(arr_final, n, m);
    Set_difference_A_B(arr_final, n, m);
    Set_difference_B_A(arr_final, n, m);

    return 0;
}