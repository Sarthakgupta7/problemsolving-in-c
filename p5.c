#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=5;i>=1;i--)
	{
		n=5-i+1;
		for(j=i;j<i+n;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}
