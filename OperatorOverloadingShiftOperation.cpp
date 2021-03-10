/*
	Question: Create a class Date containing member as:
	- dd
	- mm
	- yyyy
	Write a C++ program for overloading operators >> and << to accept
	and display a Date.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Date{
	private:
		int dd,mm,yy;
	public:
		friend istream &operator >>(istream &input , Date &d)
		{
			cout<<"Enter the Date"<<endl;
			input>>d.dd;
			cout<<"Enter the Month"<<endl;
			input>>d.mm;
			cout<<"Enter the Year"<<endl;
			input>>d.yy;
			return input;
		}
		friend ostream &operator <<(ostream &output, Date &d)
		{
			output<<"Date:"<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<endl;
			return output;
		}
};
int main(void)
{
	Date d;
	cin>>d;
	cout<<d;
}

