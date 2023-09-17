#include<stdio.h>
int main()
{
	int i,n,j;
	for(i=1;i<=4;i++)
	{
		n=i;
		for(j=i;j<i+n;j++)
		{
			printf("%c",(j+64));
		}
		printf("\n");
	}
	return 0;
}
