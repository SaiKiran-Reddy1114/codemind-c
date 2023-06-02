#include<stdio.h>
int main()
{
	int i,j,n,c=0;
	scanf("%d",&n);
	for(i=(64+n);i>=65;i--)
	{
		for(j=i;j>=65;j--)
		{
			printf("%c ",i);
		}
		printf("
");
	}
}