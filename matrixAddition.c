#include<stdio.h>
int main()
{
	int i,j,a,b;
	printf("enter a,b:");
	scanf("%d%d",&a,&b);
	int m1[a][b];
	int m2[a][b];
	printf("enter matrix elements:");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("enter m2:");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("m1+m2 is:");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
return 0;
}
