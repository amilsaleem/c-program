#include<stdio.h>
int pal(int *num)
{
	int temp, digit,s=0;
	temp=*num;
	
	while(temp>0)
	{
	digit=temp%10;
	s=s*10+digit;
	temp=temp/10;
}
return s;

}
                  

int main()
{
	int d, n,c;
	printf("Enter a no");
	scanf("%d",&n);
	c=n;
	d=pal(&n);
	
	
	   if(c==d)
                  	{
		                printf("It is palindrome %d",c);
		
	                }
	                    else
                	{
		                printf("it is not");
	                }
}
