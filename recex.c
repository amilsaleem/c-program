#include<stdio.h>

int re(int a);
int main()
{
	int a,s;
	printf("Enter factorial Number");
	scanf("%d",&a);
	s=re(a);
	printf("%d",s);
}
int re(int a)
{
	if(a==0)
	{
		return 0;
	}
	else if(a==1)
	{
		return 1;
	}
	else if(a>1)
	{
		return a * re(a-1);
	}
	

}
