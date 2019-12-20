#include<stdio.h>
#define begin main
int begin()
{
int a,b,c;
printf("enter two numbers");
scanf("%d %d",&a,&b);
c=a+~b+1;
printf("the sum is %d");
}
