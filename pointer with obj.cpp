#include<iostream>
using namespace std;

class shopitem{
	private :
		int id;
		float price;
		char name[40];
	public : 
	
	void set(int a,float b,char s[])
	{
		id = a;
		price = b;
		strcpy(name,s);
		
	}
	
	void show()
	{   
	    
		cout<<"\tYour item id : " << id << "\tYour item price : "<<  price <<"\tYour item name : "<<  name;
		cout<<"\n============================================================================================";
	}
};

main()
{
	int size =3;
	shopitem *ptr = new shopitem[size];
	shopitem *ptrtemp = ptr;
	
	int p,i;
	char n[30];
	float q;
	for (i=0; i < size; i++)
	{
		cout<<"\nEnter Item ID = ";
		cin>>p;
		cout<<"Price of Item = ";
		cin>>q;
		cout<<"Name of Item = ";
		cin>>n;
		
		ptr->set(p,q,n);
		ptr++;
		
	}
	
	for (i=0; i < size; i++)
	{
		
		cout<<"\nItem number : "<<i+1;
		
		ptrtemp->show();
		ptrtemp++;
		
	}
}