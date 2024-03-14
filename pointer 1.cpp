#include<iostream>
using namespace std;

void fun(int*x)
{
	*x=(*x)+1;
	cout<<"\nx="<<*x;

}
main()
{
	int a;
	cout<<"\nEnter value for a =";
	cin>>a;
	fun(&a);
	cout<<"\nA="<<a;
}