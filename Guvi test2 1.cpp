 

#include<conio.h>
#include<iomanip.h>
class time
{
  int h,m,s;
  public:
  void read();
  void print();
  time operator+(time t2);
};
void time::read()
{
  cout<<"\nEnter hour,minutes and seconds\n";
  cin>>h>>m>>s;
}
void time::print()
{
  cout<<"\nTime is-> "<<setfill('0')<<setw(2)<<h;
  cout<<":"<<setfill('0')<<setw(2)<<m;
  cout<<":"<<setfill('0')<<setw(2)<<s<<endl;
}
time time::operator+(time t2)
{
  time t;
  t.h=h+t2.h;
  t.m=m+t2.m;
  t.s=s+t2.s;
  return t;
}
void main()
{
  clrscr();
  time t1,t2,t3;
  t1.read();
  t1.print();
  t2.read();
  t2.print();
  t3=t1+t2;
  cout<<"\nTime1+ Time2:\n";
  t3.print();
  getch();
}#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class time
{
  int h,m,s;
  public:
  void read();
  void print();
  time operator+(time t2);
};
void time::read()
{
  cout<<"\nEnter hour,minutes and seconds\n";
  cin>>h>>m>>s;
}
void time::print()
{
  cout<<"\nTime is-> "<<setfill('0')<<setw(2)<<h;
  cout<<":"<<setfill('0')<<setw(2)<<m;
  cout<<":"<<setfill('0')<<setw(2)<<s<<endl;
}
time time::operator+(time t2)
{
  time t;
  t.h=h+t2.h;
  t.m=m+t2.m;
  t.s=s+t2.s;
  return t;
}
void main()
{
  clrscr();
  time t1,t2,t3;
  t1.read();
  t1.print();
  t2.read();
  t2.print();
  t3=t1+t2;
  cout<<"\nTime1+ Time2:\n";
  t3.print();
  getch();
}
