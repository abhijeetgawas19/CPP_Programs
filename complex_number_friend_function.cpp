/*
	Create class ComplexNumber containing members as:
		- real
		- imaginary
	Write a C++ Program to calculate and display sum of two complex numbers
	(Return Friend Function and return by Object)
*/
#include<iostream>
using namespace std;
class ComplexNumber{
	private:
		int real;
		int img;
	public:
		// Constructor
		ComplexNumber()
		{
			this->real = 0;
			this->img = 0;
		}
		ComplexNumber(int real, int img)
		{
			this->real = real;
			this->img = img;
		}
		// Friend Function
		friend ComplexNumber add (ComplexNumber objA, ComplexNumber objB);
		void display()
		{
			cout<<this->real<<"+"<<this->img<<"j"<<endl;
		}
};
// Friend Function
ComplexNumber add (ComplexNumber objA, ComplexNumber objB)
{
	ComplexNumber objC;
	// Addition Operation
	objC.real = objA.real + objB.real;
	objC.img = objA.img + objB.img;
	return objC;
}
int main(void)
{
	int realNumber, imgNumber;
	cout<<"Enter the Real Number"<<endl;
	cin>>realNumber;
	cout<<"Enter the Imaginary Number"<<endl;
	cin>>imgNumber;
	ComplexNumber objA = ComplexNumber(realNumber,imgNumber);
	cout<<"Enter the Real Number"<<endl;
	cin>>realNumber;
	cout<<"Enter the Imaginary Number"<<endl;
	cin>>imgNumber;
	ComplexNumber objB = ComplexNumber(realNumber,imgNumber);
	objA.display();
	objB.display();
	ComplexNumber objC;
	objC = add(objA,objB);
	objC.display();
}
