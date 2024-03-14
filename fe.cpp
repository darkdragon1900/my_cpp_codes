#include<iostream>
using namespace std;

class Student
{
	private:
	int total_marks;
	char FE;
	
	public:
	Student()
	{
		FE = 'F';
		total_marks = 0;
	}
	
	Student(int se_marks, int te_marks) 
	{
		FE = 'F';
		total_marks = se_marks + te_marks;
		
	
	}
	
	Student(float be_percentage) 
	{
		FE = 'F';
		total_marks = be_percentage * 100;
		
		
	}
	
	void display()
	{
		cout << "FE: " << FE << endl;
		cout << "Total Marks: " << total_marks << endl;
	}
};

int main()
{
	Student s1(80, 120);
	s1.display();
	
	Student s2(75);
	s2.display();
	
	Student s3;
	s3.display();
	
	return 0;
}