//write a program which class name is city 
//with member  city name and temp create 2 obj and print city name which temp is less 
#include<iostream>
#include<string.h>
using namespace std;

class city{
	private :
		char c_name[20];
		int temp;
	
	public :
	    
		city(char c_name[],int temp)
		{
			strcpy(this->c_name,c_name);
			this->temp=temp;
			
		 } 
		 
		void show()
		{
			cout<<"\t\ncity name:"<<c_name<<"\n\ttemperature: "<<temp;
			cout<<"\n---------------------------------------------";
		}
		
		city comp(city &obj)
		{
			if(temp<obj.temp)
			return *this;
			else
			return(obj);
		}
};

main()
{
	city c1("Nashik",21);
	city c2("\nPune",31);
	city temp1("\nnull ", 0);
	
	c1.show();
	c2.show();
	
	temp1=c1.comp(c2);
	
	temp1.show();
	cout<<"\n------min temp-------";
	temp1=c2.comp(c1);
	
	temp1.show();
	
}
