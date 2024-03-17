#include<iostream>
using namespace std;

main()
{
	char city;
	int count =0;
	
	cout<<"enter city:";
	cin.get(city);
	
	while(city !='\n')
	{
		
		count++;
		cout.put(city);
		cin.get(city);
		
	}
		cout<<"\nTotal Count= "<<count;

}