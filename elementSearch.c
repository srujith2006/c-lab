#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter n value:");
	scanf("%d",&n);
	int arr[n];
	printf("enter j value:");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
		if(j==arr[i])
		{
			printf("YES");
		}
	}
return 0;
}
