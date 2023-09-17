#include<stdio.h>
int main()
{
	char character='A';
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",character);
		}
		character++;
		printf("\n");
	}
}
