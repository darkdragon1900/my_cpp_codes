#include<iostream>
using namespace std;

class employee{
	private : 
	int empid;
	float salary;
	char name[40];
	
	public :
		
		void set(int x, float y , char s[])
		{
			empid=x;
			salary=y;
			strcpy(name,s);
			
		}
		
		void get()
		{
			cout<<"\nyour emp id is="<<empid<<"\nyour salry is ="<<salary<<"\nyour name is="<<name;
		} 
		
		float fun()
		{
			return(salary);
		}
};

main()
{
	
	int size = 3,i;
	employee *obj = new employee[size];
	employee *ptr = obj;
	int total;
	

	int id;
	float sal;
	char n[40];
	
	for(i=0;i < size;i++)
	{
		cout<<"\nEnter your Emp id=";
		cin>>id;
		cout<<"\nEnter your Salary=";
		cin>>sal;
		cout<<"\nEnter your name=";
		cin>>n;
		obj->set(id,sal,n);
		total=total+obj->fun();
		obj++;
		
		
	}
	
	cout<<"your Info";
	for(i=0;i<size;i++)
	{
		ptr->get();
		ptr++;
	}
	
	cout<<"total salary="<<total;
}