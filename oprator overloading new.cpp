#include<iostream>
using namespace std;

class test{
	private :
		int a , b , c;
	public:
		
		test(int x,int y)
		{
			a=x;
			b=y;
			c=0;
			
		}
		
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
		}
		
		test operator +(test &obj)
		{
			test temp(0,0);
		    temp.a = a + obj.a;
			temp.b = b + obj.b;
			return temp;
		}
};

main()
{
	test o1(15,10),o2(10,14),o3(0,0);
	cout<<"\n---------------------------------";
	o1.show();
	cout<<"\n---------------------------------";
	o2.show();
	cout<<"\n---------------------------------";
	o3 = o1+o2;
	o3.show();
}