#include<iostream.h>
#include<conio.h>
int i;
class details
{     
public:
char name[30];
long int salary,age,dgt,sum,total;
void input();
void set();
void display();
};
void details::input()
{
cout<<"enter name=";
cin>>name;
cout<<"enter salary=";
cin>>salary;
cout<<"enter the no. of daughters";
cin>>dgt;
cout<<"enter the age";
cin>>age;
}
void details::set()
{
    sum=0;
if(dgt>1)
{
sum=sum+10;
}
if(salary>30000)
{
sum=sum+15;
}
if(age>=40)
{
sum=sum+30;
}
total=(salary*sum)/100;
 cout<<"salary increasing="<<total;
}
void details::display()
{
cout<<"\t\nname="<<name;
cout<<"\t\nsalary="<<salary;
cout<<"\t\nno. of daughter"<<dgt;
cout<<"\t\nage="<<age;
cout<<"\t\nincrement="<<total;
}
void main()
{
  clrscr();
details member[20];
int n;
cout<<"how many member details";
cin>>n;
for(i=0;i<n;i++)
{
   member[i].input();
}
for(i=0;i<n;i++)
{
   member[i].set();
}
cout<<"do you want display";
for(i=0;i<n;i++)
{
    member[i].display();
}
getch();
}
