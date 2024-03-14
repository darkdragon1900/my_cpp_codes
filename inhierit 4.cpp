#include<iostream>
using namespace std;

class first{
	private :
		int a;
		int b;
	protected :
		int c;
	public :
		
		void add()
		{
			cout<<"\nEnter the number a = ";
			cin>>a;
			cout<<"\nEnter the number b = ";
			cin>>b;
			c=a+b;
		}
		
		void show()
		{
			cout<<"\nA: "<<a<<"\nB: "<<b<<"\nAddition: "<<c;
		}
};

class second{
	private:
	int p;
	protected:
		int ans;
	
	public :
		
		void add1()
		{
			cout<<"\nEnter value for adding p :";
			cin>>p;
			ans=p+p;
		}
		
		void add2()
		{
			cout<<"\nP:"<<p<<"\nans of p add="<<ans;
		}
		
	
};

class derived : public first, public second  
{
	private :
		int d;
	public :
		void set()
		{
			d=ans+c;
			cout<<"\nThe value of d = "<<d;
			
			
			
		}
		
		
		
};

main()
{
	derived obj3;
	obj3.add();
	obj3.add1();
	obj3.set();
	
	

}