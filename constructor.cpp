//write a program in c++ which create city class and set the temprature inside the default constructor
#include<iostream>
using namespace std;

class City
{
    private:
    float temperature;
    public:

    City() 
    {
        temperature = 30.0; 
    }
    void show()
    {
    	cout<<"\nTemperature in this city: "<<temperature<<" degree celsius";
	}
};

int main() 
{
    City myCity; 
    myCity.show(); // Call the show function to display the temperature
    return 0;
}