//read student name marks from the commeand line and display the sudent details along with total
#include<stdio.h>
#include<string.h>
struct std{
	char name[15];
	int s1,s2,s3,s4,s5;
}s;
int main(int argc,char *argv[])
{
	int total=0;
	strcpy(s.name,argv[1]);
	s.s1=atoi(argv[2]);
	s.s2=atoi(argv[3]);
	s.s3=atoi(argv[4]);
	s.s4=atoi(argv[5]);
	s.s5=atoi(argv[6]);
	printf("name \ts1 \ts2 \t s3 \t s4 \t s5");
	printf("\n%s\t%d\t%d\%d\t%d\t%d",s.name,s.s1,s.s2,s.s3,s.s4,s.s5);
return 0;
}
