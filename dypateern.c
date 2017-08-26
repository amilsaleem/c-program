#include<stdio.h>
int main()
{
	int i,j,a[20],n;
	printf("Enter Number of Array Element");
	scanf("%d",&n);
	printf("Enter array Element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		
		{
			if(j<a[i])
{

			printf("*");
}
else
{
	printf(" ");
}


		}
		printf("\n");
	}
	
}
