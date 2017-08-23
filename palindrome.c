#include<stdio.h>
int pal(int num)
{
	int digit,s=0;
	
	while(num>0)
	{
	digit=num%10;
	s=s*10+digit;
	num=num/10;
}
return s;

}

int main()
{
	int n,c;
	printf("Enter a no");
	scanf("%d",&n);
c=	pal(n);
	
	if(n==c)
	{
		printf("It is palindrome %d",n);
		
	}
	else
	{
		printf("it is not");
	
	}
}
