#include<iostream>
using namespace std;

class my{
	private : 
	int a,b;
	
	public:
		
		void get(int a, int b)
		{
			this->a=a;
			this->b=b;
		}
		
		void show()
		{
			cout<<"a"<<a<<"b"<<b;
		}
	
};
main()
{
	my obj;
	obj.get(100,200);
	obj.show();
	
}
