#include <stdio.h>
int main()

{
	int a[50],i,temp,num,j;
	printf("Enter no of term");
	scanf("%d",&num);
	j=num-1;
	printf("Enter number");
	for(i=0;i<num;i++)
	{
	scanf("%d",&a[i]);
}

for(i=0;i<j;i++)
	
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
		
	}
	printf("revrse =\n");
	for(i=0;i<num;i++)
{
	
	
		printf("%d",a[i]);
}
	
	return 0;
}
