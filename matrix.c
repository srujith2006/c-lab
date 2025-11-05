#include<stdio.h>
int main()
{
	int i,j;
	int marks[2][5]={
		{23,43,23,21,34},
		{23,43,54,45,65},
	};
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("marks[%d][%d]=%d ",i,j,marks[i][j]);
		}
		printf("\n");
	}
return 0;
}
