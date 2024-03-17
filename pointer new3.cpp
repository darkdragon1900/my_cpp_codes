#include<iostream>
using namespace std;

class emp{
	
	private :
		int id,sal;
		char name[30];
	public :
		
		emp(int id , int sal , char name[])
		{
			this->id=id;
			this->sal=sal;
			strcpy(this->name,name);
			
		}
		
		void show()
		{
			cout<<"\nEmp id ="<<id<<"\nEmp sal="<<sal<<"\nEmp name="<<name;
			
		}
		
		emp comp(emp &obj)
		{
			if(sal>obj.sal)
		    return *this;
		    else 
		    return(obj);
		}
		
		
};

main()
{
	emp e1(1,1000,"raj");
	emp e2(2,2000,"mohan");
	emp temp(0,0,"null"); mjk 
	
	`
	
	e1.show();
	e2.show();
	temp.show();
	
	temp=e1.comp(e2);
	temp.show();
	
	cout<<"\n------maximum salary";
	temp=e2.comp(e1);
	temp.show();
}