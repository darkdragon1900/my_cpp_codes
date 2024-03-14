#include<iostream>
using namespace std;

class add{
	private :
		int a,b;
		float p,q;
		char s[40];
		
	public :
	
	int test(int x,int y)
	{
		a=x;
		b=y;
		return(a+b);
	}	
	
	void test()
	{
		cout<<"Enter your name";
		cin>>s;
		cout<<"enter numbers:";
		cin>>a>>b;
	
	}
	
	float test(float x)
	{
		p=x;
		q=x;
		return(p*q);
	}
};

main()
{
	add a; 
	cout<<"addition"a.test(10,20);
	

	
	cout<<"multi="<<a.test(12);
	
}