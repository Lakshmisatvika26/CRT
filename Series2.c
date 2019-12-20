#include<stdio.h>
int main()
{
	int i=53,n;
	scanf("%d",&n);
	printf("%d %d ",i,i);
	while(i>n)
	{
		i=i-13;
		printf("%d %d ",i,i);
	
	}
}
