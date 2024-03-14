#include<iostream>
using namespace std;

class base {
		
	public :
		void show()
		{
			cout<<"\nBase class";
		}
		
	
	
};

class child : public base {
	
	public :
		void show()
		{
			base ::show();
			cout<<"\nDerived Class";
		}
	
	
}; 

main()
{
	
	///bobj.base_show();
	//bobj.child_show();
	child obj;
	obj.show();
	
	
}

