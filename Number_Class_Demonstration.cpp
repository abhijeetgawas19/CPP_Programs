/*
	Write a C++ program using class which contains two data member of type integer.
	Create and initialize the object using default and parameterized constructor with default value.
	Write a member function to display maximum from given two numbers for all objects.
*/
#include<iostream>
using namespace std;
class Number{
	private:
		int numberOne;
		int numberTwo;
	public:
		// Constructors
		// Default Constructor
		Number()
		{
			this->numberOne = 0;
			this->numberTwo = 0;
		}
		// Parameterized Constructor
		Number(int numberOne=1, int numberTwo=2)
		{
			this->numberOne = numberOne;
			this->numberTwo = numberTwo;
		}
		// Function to find maximum
		int maximumStatus()
		{
			if(this->numberOne > this->numberTwo)
				return 1;
			else if(this->numberOne < this->numberTwo)
				return 2;
			else
				return 3;
		}
};
int main(void)
{
	int numberOne, numberTwo, status;
	cout<<"Enter the First Integer"<<endl;
	cin>>numberOne;
	cout<<"Enter the Second Integer"<<endl;
	cin>>numberTwo;
	Number obj = Number(numberOne,numberTwo);
	status = obj.maximumStatus();
	if(status==1)
		cout<<numberOne<<" is greater than "<<numberTwo<<endl;
	else if(status==2)
		cout<<numberTwo<<" is greater than "<<numberOne<<endl;
	else
		cout<<numberOne<<" is equal to "<<numberTwo<<endl;	
}
