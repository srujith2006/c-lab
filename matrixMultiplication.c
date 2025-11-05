#include<stdio.h>
int main()
{
	int i,j,a,b;
	printf("enter a,b :");
	scanf("%d%d",&a,&b);
	int m[a][b],n[a][b];
	printf("enter m,n:");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("m[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
			printf("n[%d][%d]=",i,j);
			scanf("%d",&n[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",m[i][j]*n[i][j]);
		}
		printf("\n");
	}
return 0;
}
