/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 10
Date of submission - 16-09-2026*/
#include <stdio.h>
#include <string.h>
int main()
{   char day_name[20]; 
    int first_day,num_days;
    printf("Enter value of firstday (Monday,Tuesday.....) and no of days in month:");
    scanf("%10s",day_name);
    scanf("%d",&num_days);
    
    if(strcmp(day_name,"Monday")==0)
     first_day=1;
    else if(strcmp(day_name,"Tuesday")==0)
    first_day=2;
    else if(strcmp(day_name,"Wednesday")==0)
    first_day=3;
    else if(strcmp(day_name,"Thursday")==0)
    first_day=4;
    else if(strcmp(day_name,"Friday")==0)
    first_day=5;
    else if(strcmp(day_name,"Saturday")==0)
    first_day=6;
    else if(strcmp(day_name,"Sunday")==0)
    first_day=7;
    else 
     {printf("Invalid input");
        return 1;}

    printf("     M     T     W     T     F     S     S\n");
     for(int i=1;i<first_day;i++)
    {
       printf("      ");

    } 
    for(int day=1;day<=num_days;day++)
    {
        printf("%6d",day);
        if((day+first_day-1)%7==0){
            printf("\n");
        }
        
    }
    printf("\n");
return 0;

}