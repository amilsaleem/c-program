#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{ int a,i,x=45,y=25, num=0,acc,p,dep;
int b=16001,pass=987;
char n[20];
c:
clrscr();
gotoxy(40,5);
{textcolor(WHITE);
printf("Bank");
gotoxy(40,10);
printf("Open account"); }
gotoxy(40,15);
printf("deposit amount");
gotoxy(40,20);
printf("withdrawl");
gotoxy(40,25);
printf("Exit");

for(i=0;i<=20;i++)
{
if(13==getch())
{
clrscr();
break;
//goto a;
 }
else if(119==getch())
{
gotoxy(x,y-1);
y--;
}
else if(97==getch())
{
gotoxy(x-1,y);
x--;
}
else if(115==getch())
{
gotoxy(x,y+1);
y++;

}
else if(100==getch())
{
gotoxy(x+1,y);
x++;
}

//else if(13==getch())
//{
 // clrscr();
 // goto a;
//}



}
getch();
if(101==getch())
{
clrscr();
return 0;
}

else
{
clrscr();
//a:
gotoxy(40,5);                     //loop close
if(y==10&&x>40) //condition
{ gotoxy(40,50);
textcolor(2);
cprintf("Open account");
gotoxy(40,10);
printf("Name :  ");
scanf("%s",&n);
//printf("%s",n);
gotoxy(30,4);
printf("press b for back");
//getch();
//if(98==getch())
//{
//gotoxy(47,10);
//}
gotoxy(40,15);
printf("Account type");
gotoxy(52,16);
printf("Saving");
gotoxy(52,17);
printf("current");

getch();
if(98==getch())
{
gotoxy(48,10);
scanf("%s",&n);
}
for(i=0;i<1;i++)
{           {
if(119==getch())
{
gotoxy(52,16);
{textcolor(RED);
cprintf("Saving");
} }
else
{
gotoxy(52,17);
{textcolor(RED);
cprintf("current");
 }
}

}          }
gotoxy(40,20);
printf("Enter contact no : ");

//if(98==getch())
//{
//gotoxy(58,17);
//}
scanf("%d",&num);
clrscr();   //output
gotoxy(40,10);
printf("Account No : 00000001");
gotoxy(40,15);
printf("Password : Date of Birth");
//goto c;


 }
else if(y==15&&x>40)
{
{textcolor(3);
cprintf("deposit amount");
gotoxy(40,10);
textcolor(BLUE);
cprintf("Enter account Number : ");
scanf("%d",&acc);
//gotoxy(20,5);
//printf("Press b for back");

gotoxy(40,15);
textcolor(BLUE);
cprintf("Enter password : ");
scanf("%d",&p);
if(acc==b&&p==pass)
{
gotoxy(40,20);
printf("Enter amount to deposit : ");
scanf("%d",&dep);
clrscr();
gotoxy(40,15);
printf("Thanks for Depositing the amount of %d",dep);
goto c;
}
else
{           clrscr();
gotoxy(30,15);
textcolor(RED);

cprintf("Account no or Password does not match");
//goto c;
}
//goto c;




} }
else if(y==20&&x>=40)
{

  gotoxy(40,20);
{textcolor(RED);
//gotoxy(40,20);
cprintf("withdrawl");
  }
}
else if(y==25&&x>=40)
{        clrscr();
  printf("Thanks for visiting");
	}                  }
// printf("%d,%d",x,y);
getch();
}