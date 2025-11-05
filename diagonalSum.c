#include<stdio.h>
int main()
{
	int i,j,sum=0,a,b;
	printf("enter a,b respectively:");
	scanf("%d%d",&a,&b);
	printf("enter matrix:");
	int m[a][b];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("enter m[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(((i+j)-1)==1)
			sum=sum+m[i][j];
		}
	}
	printf("%d",sum);
return 0;
}
