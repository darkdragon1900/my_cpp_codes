//operator overloading 

#include<iostream>
using namespace std;

class test{
	private :
		int a,b,c;
		
	public :
		
		int add_num(int x,int y, int z)
		{
			a=x;
			b=y;
			c=z;
		}
		
		void show()
		{
			cout<<"\nA:"<<a<<"\nB:"<<b<<"\nC:"<<c;
		}
		
		void operator +()
		{
			a=  +a;
			b=  +b;
			c=  +c;
		}
		
	    	
};

main()
{
	test a;
	
	a.add_num(15,-10,-55);
	a.operator +();
	a.show();
}