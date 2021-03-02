/*
	Write a C++ proram to calculate create class Date which datamembers
		1. dd
		2. mm
		3. yy
		Create and initalize the object by using parameterized constructor and display date in
		dd-mon-yyy format
		(Input: 10-10-1997 Output: 10-OCT-1997). Perform Validation for month.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Date{
	private:
		int dd,mm,yy;
		char mon[10];
	public:
		// Constructors
		// Default
		Date()
		{
			this->dd = 01;
			this->mm = 01;
			this->yy = 2001;
			strcpy(this->mon,"JAN");
		}
		Date(int dd, int mm, int yy)
		{
			this->dd = dd;
			this->mm = mm;
			this->yy = yy;
		}
		void validator()
		{
			if(this->mm==1)
				strcpy(this->mon,"JAN");
			else if(this->mm==2)
				strcpy(this->mon,"FEB");
			else if(this->mm==3)
				strcpy(this->mon,"MAR");
			else if(this->mm==4)
				strcpy(this->mon,"APR");
			else if(this->mm==5)
				strcpy(this->mon,"MAY");
			else if(this->mm==6)
				strcpy(this->mon,"JUN");
			else if(this->mm==7)
				strcpy(this->mon,"JUL");
			else if(this->mm==8)
				strcpy(this->mon,"AUG");
			else if(this->mm==9)
				strcpy(this->mon,"SEP");
			else if(this->mm==10)
				strcpy(this->mon,"OCT");
			else if(this->mm==11)
				strcpy(this->mon,"NOV");
			else if(this->mm==12)
				strcpy(this->mon,"DEC");
		}
		void display()
		{
			cout<<"\nDate:"<<this->dd<<"-"<<this->mon<<"-"<<this->yy<<endl;
		}
};
int main(void)
{
	int dd;
	int mm;
	int yy;
	cout<<"Enter the Day[1-31]"<<endl;
	cin>>dd;
	cout<<"Enter the Month[1-12]"<<endl;
	cin>>mm;
	cout<<"Enter the Year"<<endl;
	cin>>yy;
	// Object Creation
	Date obj = Date(dd,mm,yy);
	obj.validator();
	obj.display();
	
}
