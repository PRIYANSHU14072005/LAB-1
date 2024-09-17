//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES
#include <stdio.h>
int main()
{
    int t;
    t = 31558150 ; 
    printf("time taken by earth to complete one revolution around sun  in mintues is %f\n", t/ 60.0);
    printf("time taken by earth to complete one revolution around sun in hours is %f\n", t/(60.0*60));
    printf("time taken by earth to complete one revolution around sun in days is %f\n",t/(60.0*60*24));
    return 0;
}