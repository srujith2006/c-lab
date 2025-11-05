//#include<stdio.h>
int main()
{
	int i,j,n,x;
	printf("enter array length:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&arr[n]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}printf("%d\n",arr[i]);
	}
return 0;
}
/*
#include<stdio.h>
int main()
{
	int i,c=0;
	char s[10]="SruJith";
	printf("%d",s);
	for(i=0;s[i]!='/0';i++)
	{
	if (s[i]>=65 || s[i]<=90)
        c=c+1;
}
printf("%d",c);
}*/
