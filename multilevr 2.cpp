#include<iostream>
using namespace std;

class A{
	private:
		int empid;
		char name[40];
		
	protected:
		int salary;
		
	public:
	void get()
	{
		cout<<"\nEnter your empid:";
		cin>>empid;
		cout<<"\nEnter your name:";
		cin>>name;
		cout<<"\nEnter your salary:";
		cin>>salary;
	}

	void set()
	{
		cout<<"\nEMP id ="<<empid<<"\nname of employee="<<name<<"\nsalary="<<salary;
		
	}
	
		
};

class B : public A{
	public :
		int salary1;
		int total;
		
	void get1()
	{
		cout<<"\nEnter your first salry:";
		cin>>
		salary1;
		total=salary+salary1;
		
	}
	
	void set1()
	{
		cout<<"\nyour total salary is ="<<total;
	}
	
	
};

class C : public B{
	public :
		int salary2;
		int netsal;
		
	void get2()
	{
		cout<<"\nEnter your second salry:";
		cin>>salary2;
		netsal=total+salary2;
		
	}
	
	void set2()
	{
		cout<<"\nyour NET salary is ="<<netsal;
	}
	
	
};
main()
{
	C obj;
	obj.get();
	obj.set();
	obj.get1();
	obj.set1();
	obj.get2();
	obj.set2();
}

