#include <iostream.h>
#include<conio.h> 


#define MAX 10
int a[10],i,s,sum=0,g[10],l=0,b[10],j;

class student
{
private:
	char  name[30];
	int   rollNo;
	int   total,temp;
	float perc;
	public:
	
	void getDetails(void);
	//member function to print student's detail
	void display();
};


void student::getDetails(void)
{
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
     cout<<"enter the how many subjects";
     cin>>s;
	cout<<"enter the marks";

     cout<<"enter the marks of physics,maths ,chemistry out of 100";
       for(i=0;i<s;i++)
       {
       cin>>a[i];
       }
       for(i=0;i<s;i++)
       {
	    sum=sum+a[i];
	    if(a[i]<0)
	    {
	       cout<<"error";
	    }
	    else if(a[i]>100)
	    {
	       cout<<"erroe";
	    }
	    else
	    {
	    cout<<"success";
	    }

       }
       total=sum;
       cout<<"total="<<sum;
       g[l++]=sum;
       sum=0;

}
void student::display()
{
     for(j=0;j<l;j++)
     {
	 if(g[j]<=g[j+1])
	 {
	    temp=g[j];
	    g[j]=g[j+1];
	    g[j+1]=temp;
	 }
     }
     for(j=0;j<1;j++)
     cout<<"maximum ="<<g[j];
}

void main()
{
      clrscr();
    student std[MAX],*p;       //array of objects creation
    int n,loop;

    cout << "Enter total number of students: ";
    cin >> n;

    for(loop=0;loop< n; loop++){
	cout << "Enter details of student " << loop+1 << ":\n";
	std[loop].getDetails();
    }

    p=&std[10];
    p->display();
    getch();
}
