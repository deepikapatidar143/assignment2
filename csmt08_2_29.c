/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 9
Date of submission - 16-09-2026*/
#include <stdio.h>
int main()
{
    int x,y,n;
    printf("Enter vakue of x y n");
    scanf("%d %d %d",&x,&y,&n);
    double sum=0,final,temp2;
    for(int i=n-1; i>=1;i--){
      int temp=y*(2+i*4);
      sum+=temp;
      sum=(x*x)/sum;
 }
    temp2=2*x/(2*y-x+sum);
    final=1+temp2;
    printf("Value of e^(x/y) is %lf\n",final);
    return 0;

}