#include<iostream>
using namespace std;
main()
{

char city;
int count;

count=0;

cout<<"\nEnter string name:";
cin>>city;

while(city!='\n')
{
	count++;
	cout.put(city);
	
	cin.get(city); 
	
	
}


	cout<<"\nsrting conunt is ="<<count;

}
