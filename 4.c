//PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES
#include<stdio.h>
int main (){
    int f,c;
    //f=fahrenheit, c=centigrade
    printf("enter tempertaure in fharenheit: ");
    scanf("%d",&f);
    printf("temperature in centigrade is %d", c=(f-32)*(5.0/9));
    return 0;
}