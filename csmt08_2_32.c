/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 32
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{
    int year,day,leap_year,normal_year,year_1,odd_days;
    printf("Enter year");
    scanf("%d",&year);
    if(year%400==0 ||( year%4==0 && year%100 !=0))
    {
        printf("This is a leap year\n");
    }
    else {
       printf("This is not a leap year\n");
    }
    year_1=year-1900;
    leap_year=(year_1-1)/4;
    normal_year=year_1-leap_year;
    odd_days= (normal_year*1 + leap_year*2)%7;
    if(odd_days==0)  printf("On first january of this year %d is Monday\n",year);
    if(odd_days==1)  printf("On first january of this year %d is Tuesday\n",year);
    if(odd_days==2)  printf("On first january of this year %d is Wednesday\n",year);
    if(odd_days==3)  printf("On first january of this year %d is Thursday\n",year);
    if(odd_days==4)  printf("On first january of this year %d is Friday\n",year);
    if(odd_days==5)  printf("On first january of this year %d is Saturday\n",year);
    if(odd_days==6)  printf("On first january of this year %d is Sunday\n",year);
 return 0;   
}