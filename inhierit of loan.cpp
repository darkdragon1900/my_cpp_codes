#include<iostream>
using namespace std;

class BankFD{
	private :
		int p,r;
		float si;
	protected :
		int n;
		float amt;
	public :
		
		void set()
		{
			cout<<"\nenter p , r,n :";
			cin>>p>>r>>n;
			si=p*r*n/100;
			amt=p+si;
			
		}
		
		void get()
		{
			cout<<"\n your Simple interest is : "<<si;
			cout<<"\n your total amt is : "<<amt;
		}
	
};

class loan : public BankFD{
	private :
		int loan_amt;
		float rate,total_amt,amt1;

	public :
		
		void set1()
		{
			cout<<"\nenter loan amt , rate ";
			cin>>loan_amt>>rate;
			amt1=loan_amt*rate*n/100;
			total_amt=amt+amt1;
			
		}
		
		void get1()
		{
			cout<<"\n your total loan amount is : "<<total_amt;
			
		}
	
};

main()
{
	loan obj;
	obj.set();
	obj.get();
	obj.set1();
	obj.get1();
}
