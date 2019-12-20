#include<stdio.h>
int main()
{
	{
		int i,n,j,res,s=8;
		scanf("%d",&n);
		printf("%d",s);
		for(i=1;i<=n;i++)
		{
			res=i*(((s)*i)-(i+1));
			printf("%d ",res);
			s=res;
		}
	}
}
