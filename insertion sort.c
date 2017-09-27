#include<stdio.h>
int main()
{
	int a[10],i,j,m=1,n,t;
	printf("Enter total NO");
	scanf("%d",&n);
	printf("Enter the element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(m=1;m<=n;m++)
	{
	
	
	for(j=m;j>0;j--)
	{
		if(a[j-1]>a[j])
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1] = t;
		} 
}}
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}


}

