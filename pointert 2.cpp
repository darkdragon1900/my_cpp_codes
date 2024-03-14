#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	
	
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"\nx="<<*x<<"\ny="<<*y;
}

main()
{
	int a,b;
	cout<<"\nEnter value for a and b";
	cin>>a>>b;
	swap(&a,&b);
	cout<<"mainprogram "<<"A="<<a<<"B"<<b;
	
	
}