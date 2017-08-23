#include <stdio.h>
int main()

{
	int a[50],i,n=0,num,b[50],d;
	printf("Enter number");
	scanf("%d",&num);
	d=num-1;
	printf("Enter number");
	for(i=0;i<num;i++)
	{
	scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
	if(a[i]%2==0)
	{
		b[n]=a[i];  //n is start from 0
   		n++;        //increment in n 
	}
	else
	{
		b[d]=a[i];//d is start from no.of term
	       d--;   //decrement in d
	}                  }

for(i=0;i<num;i++)
{
printf("%d\t",b[i]);
}

	return 0;
}
