/*
	Question: Write a C++ program to read two float numbers.
	Perform Arithemetic Binary Operation like +,-,*,/ using Inline Function.
	Display resultant value with precision of 2
*/
#include<iostream>
#include<iomanip>
using namespace std;
// Inline Functions
inline float addition(float numberOne, float numberTwo)
{
	return numberOne+numberTwo;
}
inline float substraction(float numberOne, float numberTwo)
{
	return numberOne-numberTwo;
}
inline float multiplication(float numberOne, float numberTwo)
{
	return numberOne*numberTwo;
}
inline float division(float numberOne, float numberTwo)
{
	return numberOne/numberTwo;
}
int main(void)
{
	float numberOne, numberTwo;
	cout<<"Enter the First Number"<<endl;
	cin>>numberOne;
	cout<<"Enter the Second Number"<<endl;
	cin>>numberTwo;
	cout<<"Addition:"<<setprecision(2)<<addition(numberOne,numberTwo)<<endl;
	cout<<"Substraction:"<<setprecision(2)<<substraction(numberOne,numberTwo)<<endl;
	cout<<"Multiplication:"<<setprecision(2)<<multiplication(numberOne,numberTwo)<<endl;
	cout<<"Division:"<<setprecision(2)<<division(numberOne,numberTwo)<<endl;
}
