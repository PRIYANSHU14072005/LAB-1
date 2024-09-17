//swap two variables using third variable//
#include<stdio.h>  //header file

int main()
{
    int a,b,c; //declare variables 
    printf("first value of a:");
    scanf("%d",&a);
    printf("\nfirst value of b:");
    scanf("%d",&b);
    printf("\nfirst value of c:");
    scanf("%d",&c);
    printf("before swapping:a=%d,b=%d,c=%d",a,b,c);
    a=b; // b store in a variable
    b=c; // c store in c variable
    c=a; // c store in a variable
    
    printf("\nafter swapping: a=%d,b=%d,c=%d \n",a,b,c);
    return 0;
}