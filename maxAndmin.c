#include<stdio.h>
int main()
{
	int i,n,max;
	printf("N:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	int min=max;
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("%d is max value in given array\n",max);
	printf("%d is min value in given array",min);
return 0;
}
