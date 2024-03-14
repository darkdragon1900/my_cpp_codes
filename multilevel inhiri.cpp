#include<iostream>
using namespace std;

class A
{ 
public:
	void Abase()
	{
		cout<<"\nA is working:";
	}
	
};

class B:public A
{
	public:
		
	void Bbase()
	{
		cout<<"\nB is working:";
	}
};

class C : public B
{
	public:
		
	void Cbase()
	{
		Abase();
		Bbase();
		cout<<"\nC is working:";
	}
};

main()
{
	C obj;

	obj.Cbase();
}