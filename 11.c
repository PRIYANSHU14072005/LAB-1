//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
#include<stdio.h>
int main (){
    int s,m;
    printf("enter time in seconds : ");
    scanf("%d",&s);
    m = s%3600;
    printf("time is %d hours and %d minutes",s/3600,m/60);
    return 0;
