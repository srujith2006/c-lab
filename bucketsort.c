//bucket sort
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	sort(arr,n);
	printf("\nenter array elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
return 0;
}
int max(int arr[],int n)
{
	int i,max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	return max;
}
//function to implement radix sort
void sort(int arr[],int n)
{
	int big,nod=0,steps,count[10],i,j,k,bucket[10][n],loc,div=1;
	big=max(arr,n);
	//count the number of digits in the largest number
	while(big>0)
	{
		
		big=big/10;
		nod++;
	}
	for(steps=1;steps<=nod;steps++)
	{
		for (j = 0; j < 10; j++) {
        count[j] = 0;
	}
	//distribute elements into buckets
	for(i=0;i<n;i++)
	{
		loc=(arr[i]/div)%10;
		bucket[loc][count[loc]++]=arr[i];
	}
	//collect eelements back into the array
	k=0;
	for(j=0;j<10;j++)
	{
		for(i=0;i<count[j];i++)
		arr[k++]=bucket[j][i];
	}
	//move to next digit
	div=div*10;
}}
