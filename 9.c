//PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
#include<stdio.h>
int main () {
    int h,m,s;
    printf("enter time in hours: ");
    scanf("%d",&h);
    printf("enter time in minutes: ");
    scanf("%d",&m);
     printf("enter time in seconds: ");
    scanf("%d",&s);
printf("total second is %d",h*3600+m*60+s);
return 0;
}