#include<stdio.h>
int main()
{
	char a[50],b[20];
	int i,z=0,s=0,sub=1,sum[5]={0},d=0,h=0,j,m=1;
	printf("******************Welcome to Assembly Language******************\n");
	scanf("%[^R]",&a);
	//scanf("%[^\n]",&b);
		for(i=0;i<100;i++)
		{
		if(a[i]=='l'&&a[i+1]=='o'&&a[i+2]=='a'&&a[i+3]=='d')
			{
				for(j=0;j<20;j++)
					{
						if(a[j]>48&&a[j]<57)
							{
								
								 h=a[j]-48;
								 sum[d]=h;
									d++;
							}
					}
			}
			else if(a[i]=='a'&&a[i+1]=='d'&&a[i+2]=='d')
			{
				
				for(j=0;j<2;j++)
					{
						
						s+=sum[j];
						 
					}
					z=2;
			}
			else if(a[i]=='m'&&a[i+1]=='u'&&a[i+2]=='l')
				{
					m=sum[0]*sum[1];
					z=1;
				}
			else if(a[i]=='s'&&a[i+1]=='h'&&a[i+2]=='o'&&a[i+3]=='w')
			{
				if(z==2)
				{
					printf("%d",s);
				}
				else if(z==1)
				{
					printf("%d",m);
				}
				
			}
	}
			
				
					
}
