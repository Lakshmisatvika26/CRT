#include<stdio.h>
int main()
{
	int num,originalnum,remainder,result=0;
	printf("enter a three digit number");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum!=0)
	{
		remainder=originalnum%10;
		result+=remainder*remainder*remainder;
		originalnum/=10;
	}
	if (result==num)
	printf("it is an armstrong number",num);
	else
	printf("it is not an armstrong number",num);
	return 0;
}
