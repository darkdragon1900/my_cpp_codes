#include<iostream>
using namespace std;

class A{
	private :
		int a;
		int b;
	protected :
		int c;
	public :
		
		void add()
		{
			cout<<"Enter the number a and b";
			cin>>a>>b;
			c=a+b;
		}
		
		void show()
		{
			cout<<"\nA:"<<a<<"\nB:"<<b<<"\nC:"<<c;
		}
	
		
		
		
};

class B : public A{
	private :
		int p;
		int q, ans;
	public :
		void multi()
		{
			cout<<"Enter the number p and q";
			cin>>p>>q;
			ans=(p*q)+c;
		}
		
		void show_info()
		{
			cout<<"\nP:"<<p<<"\nQ:"<<q<<"\nans:"<<ans;
		}
		
		
};

main()
{
	B obj;
	obj.add();
	obj.multi();
	obj.show();
	obj.show_info();
	
}