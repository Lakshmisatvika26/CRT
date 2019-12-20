#include<stdio.h>
int main()
{
	int a,b;
	int ch;
	printf("1.add,2.sub,3.mul,4.div\n");
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("enter option\n");
	scanf("%d",&ch);	
	switch(ch)
	{
		case 1:
		        printf("sum is:%d",a+b);
		        break;
		case 2:
		        printf("sub is=%d",a-b);      
	        	break;
		case 3: 
		        printf("mul is=%d",a*b);
		        break;
		case 4 : 
		         printf("rem is=%d",a%b);
		         break;
		default:printf("nothing");
		        break;
	}
return 0;
	}
