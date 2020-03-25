#include<iostream>
using namespace std;
class timea;
class dista
{
	private:
	float km;
	public:
	dista()
	{
	    km=12;
	}
	friend void speed(dista d,timea m);
};
class timea
{
	private:
	float min;
	public:
	timea()
	{
	    min=12;
	}
	friend void speed(dista d,timea m);
};
void speed(dista d,timea m)
{
	cout<<"\nSpeeed="<<d.km/m.min;
}
int main()
{
	dista d;
	timea t;
	speed(d,t);
    return 0;
}
