/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 21
Date of submission - 16-09-2026*/
#include <stdio.h>
int main(){
    int num1, num2, num3, num4, num5, largest1, largest2;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1 ,&num2 ,&num3, &num4, &num5);
  
    largest1 = num1;
    if(num2 > largest1) largest1 = num2; 
    if(num3 > largest1) largest1 = num3; 
    if(num4 > largest1) largest1 = num4; 
    if(num5 > largest1) largest1 = num5; 

    
    if (num1 != largest1) largest2 = num1;
    else if (num2 != largest1) largest2 = num2;
    else if (num3 != largest1) largest2 = num3;
    else if (num4 != largest1) largest2 = num4;
    else largest2 = num5;

    
    if (num1 > largest2 && num1 < largest1) largest2 = num1;
    if (num2 > largest2 && num2 < largest1) largest2 = num2;
    if (num3 > largest2 && num3 < largest1) largest2 = num3;
    if (num4 > largest2 && num4 < largest1) largest2 = num4;
    if (num5 > largest2 && num5 < largest1) largest2 = num5;

   printf("Second largest number: %d\n", largest2);
    

    return 0;
}
