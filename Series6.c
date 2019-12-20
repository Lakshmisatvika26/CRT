#include<stdio.h>
int main()
    {
	int N,i,j;
	scanf("%d",&N);
    if(N>=5&& N<=10)
	{
	for(i=1;i<=N;i++)
	{
	for(j=1;j<=(i*2)-1;j+=2)
	{
	printf("%d",j);
	}
	for(j=(i-1)*2-1;j>=1;j-=2)
	{
	printf("%d",j);
	}
	printf("\n");
	}
	}
    return 0;
}
