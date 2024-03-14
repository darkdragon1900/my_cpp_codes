#include<iostream>
using namespace std;

int length(char *str)
{

	int i=0;
	while(*str !='\0')
	{
	    i++;
		str++;
	}
	return(i);
}


main()
{
	int len;
	char str[40];
	
	cout<<"\nEnter String=";
	cin>>str;
    cout<<"\nstring="<<str;
	len=length(str);
	cout<<"\nlength="<<len;
}
