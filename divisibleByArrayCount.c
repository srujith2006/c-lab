#include<stdio.h>
int main()
{
	int count=0,i,n,j;
	printf("enter n value:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[i]%i)
		count++;
	}
	
}
