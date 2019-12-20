#include<stdio.h>
int main()
{
	int i,n,res,s=10,s1=80;
	scanf("%d",&n);
	printf("%d ",s1);
	printf("%d ",s);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			s=s+5;
			printf("%d ",s);
		}
		else
		{
		s1=s1-10;
		printf("%d ",s1);
	}
	}
}
