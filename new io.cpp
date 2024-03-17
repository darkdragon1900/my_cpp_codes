#include<iostream>
using namespace std;
main()
   {
	 char city[30];
	 
	 
    cout<<"\nEnter city name";
	cin>>city;
	
	
	cout<<"\n------Enter city Name";
	cin.getline(city,20);
	cout<<city;
	
}