/*
	Write a C++ program to create two class Class A, Class B.
	Each class contains one float data member.
	Perform following task
		1. To accept float numbers
		2. To display float numbers in right justified format with precision of 2
		3. To exchange private data members value of both class using friend function.
*/
#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class B;
class A{
	private:
		float value;
	public:
		A()
		{
			this->value=0.0;
		}
		A(float value)
		{
			this->value=value;
		}
		void display()
		{
			cout<<"A Class Value:"<<right<<setw(2)<<this->value<<endl;
		}
		friend void swapFunction (A&,B&);
};
class B
{
	private:
		float value;
	public:
		B()
		{
			this->value=0.0;
		}
		B(float value)
		{
			this->value=value;
		}
		void display()
		{
			cout<<"B Class Value:"<<right<<setw(2)<<this->value<<endl;
		}
		friend void swapFunction(A&,B&);
};
void swapFunction(A &obja, B &objb)
{
	// Swap Function
	float temp;
	temp = obja.value;
	obja.value=objb.value;
	objb.value=temp;
}
int main(void)
{
	float value1,value2;
	cout<<"Enter the Value for Class A"<<endl;
	cin>>value1;
	cout<<"Enter the Value for Class B"<<endl;
	cin>>value2;
	// Class A
	A obja(value1);
	obja.display();
	B objb(value2);
	objb.display();
	cout<<"Before Calling Swap Friend Function"<<endl;
	swapFunction(obja,objb);
	cout<<"After Calling Swap Friend Function"<<endl;
	obja.display();
	objb.display();
}

