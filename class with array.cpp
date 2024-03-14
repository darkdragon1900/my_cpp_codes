/*Write a program create employee class with memeber empid name and salary 
--- for 5  employee 
-- calculate total salary and avg salary of employess*/

#include<iostream>
using namespace std;

class employee {
	 
	 private :
	 	int empid,salary,total_sal;
	 	char name[50];
	 	
	 	
	 	
     public :
     	
     	void get_info()
     	{
     		cout<<"\nEnter employee id :";
     		cin>>empid>>name>>salary;
		}
		void set_info()
		{
			cout<<"\nEmp id\t="<<empid <<"\nEmp Name="<<name<<"\nEmp salary="<<salary;
		}
		
		int total()
		{
			return(salary);
		}
};

main()
{
	employee obj[10];
	int i, total=0, max=0;
	cout<<"\n\tEnter 5 employee details";
	cout<<"\n----------------------------------------------------------------------------";
	float avg_sal;
	
	for(i=0;i<3;i++)
	{
	obj[i].get_info();
	total=total+obj[i].total();
	(total<max);
	
    }
	
	for(i=0;i<3;i++)
	{
	obj[i].set_info();	
	}
	cout<<"------------------------------------------------------------------------";
	cout<<"\n\ttotal sal ="<<total;
	
	avg_sal=total/3;
	
	cout<<"\n\tAverage sal="<<avg_sal;
	
	cout<<"\nHighest Employee Details"<<max;
	
	for(i=0;i<3;i++)
	{
		if(max==obj[i].total())
		obj[i].get_info();
	} 
	
	
	
	
	
	
	
	
	
	
}