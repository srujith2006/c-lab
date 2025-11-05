#include<stdio.h>
int main()
{
	int i,j,n,a,b;
	printf("enter a,b:");
	scanf("%d%d",&a,&b);
	int m[a][b];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(i<=j)
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
return 0;
}
