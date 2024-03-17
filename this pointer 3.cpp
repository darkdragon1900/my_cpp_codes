#include<iostream>
#include<string.h>

using namespace std;

class person{
	private :
		int age;
		char name[40];
	public :
	    
		person(int age , char name[])
		{
			 this->age=age;
			 strcpy(this->name,name);
		}	
		
		void show()
		{
			cout<<"\nage ="<<age<<"\nname"<<name;
		}
		
		person comp(person &obj)
		{
			if(age>obj.age)
			return *this;
			else 
			return(obj);
			
		}
		
};

main()
{
	person p1(20,"shivam");
	person p2(35,"om");
	person temp(0,"null");
	
	temp=p1.comp(p2);
	
	
	
	
}
