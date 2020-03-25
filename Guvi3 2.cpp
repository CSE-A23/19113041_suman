#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
int i,j;
int top=0;
class string
{
private:
char st1[20];
char st2[20][20],a[10];
int result;
public:
void input();
void getinput();
};
void string::input()
{
  cout<<"enter the strings";
  cin>>st1;
  strcpy(st2[top++],st1);
}
void string::getinput()
{
    cout<<"enter the verify string";
    cin>>a;
    for(j=0;j<top;j++)
    {
	if(strncmp(st2[j],a,2)==0)
	{
	   cout<<"sucess";
	}
	else
	{
	   cout<<"error";
	}

    }
}

void main()
{
   clrscr();
string x[10];
int n;
cout<<"enter the how many strings";
cin>>n;
for(i=0;i<n;i++)
{
x[i].input();
}
for(i=0;i<n;i++)
{
   x[i].getinput();
}
getch();
}
