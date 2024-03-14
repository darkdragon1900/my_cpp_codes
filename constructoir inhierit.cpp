#include<iostream>
using namespace std;

class my_class{
	
	private :
		int a;
	public :
		
		my_class()
		{
			cout<<"\na="<<a;
		}
		
		my_class(int x)
		{   a=x;
			cout<<"\na="<<a;
		}
};

class new_class : public my_class
{
	private :
		int n;
	public :
		new_class()
		{
			cout<<"\nn=";
			cin>>n;
		}
		
		new_class(float y):my_class(100)
		{
			n=y;
			cout<<"\nn=";
			cin>>n;
		}
	    
	    void show()
	    {
	    	cout<<"\nn="<<n;
		}
	
};

main()
{
	new_class b;
	
	b.show();
	new_class(10.5);
	c.show();
	
	
}
