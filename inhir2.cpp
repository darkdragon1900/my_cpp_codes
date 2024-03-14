#include<iostream>
using namespace std;

class FE{
	private :
		int rno,s1,s2,s3;
		char name[40];
	protected :
		int total;
		
	public :
		void get()
		{
			cout<<"/nenter your roll no and name and marks of 3 sub:";
			cin>>rno>>name>>s1>>s2>>s3;
		
		}
		
		void set()
		{
			cout<<"rollno :"<<rno<<"name:"<<name<<"subject1 :"<<s1<<"sub2:"<<s2<<"sub3:"<<s3;
			
			total=s1+s2+s3;
			
		}
		
		
};

class SE : public FE
{
	
	private :
		int tot;
		int marks_total;
		float avg;
	
	public:
		
		void marks()
		{
			cout<<"Enter SE total marks:";
			cin>>tot;
			marks_total=total+tot;
			avg=marks_total/6;
			
		}
		
		void marks_show()
		{
			cout<<"YOUR TOTAL MARKS OF FE AND SE ARE = "<<marks_total;
			cout<<"your prcentage are = "<<avg;
		}
		 
		 
	
};

main()
{
	SE obj1;
	obj1.get();
	obj1.set();
	obj1.marks();
	obj1.marks_show();
}