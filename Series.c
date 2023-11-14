#include<stdio.h>
void main()
{
	int n,i,j,n1;
	printf("Enter the number of rows for series(Range:1 to 13)\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1&&n>0&&n<14)
		{
			if(i==1)
			n1=65;
			for(j=n1;j<=n1+1;j++)
			{
				printf("%c",j);
			}
			n1=j;
		}
		else if(i%2==0&&n>0&&n<14)
		{
			for(j=n1+1;j>=n1;j--)
			{
				printf("%c",j);
			}
			n1=j;
			n1=n1+3;
		}
		else
		{
			printf("error");
			break;
		}
		printf("\n");
	}
}
