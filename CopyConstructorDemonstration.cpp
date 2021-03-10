/*
	Question: Write a C++ program to create class Point
	Point has x and y as integer data memebers.
	Use copy constructor to copy one object to another.
	(Use Default and Parameterized Constructor to Initialize the appropriate objects)
*/
#include<iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point()
		{
			// Default Constructor
			this->x=0;
			this->y=0;
		}
		Point(int x,int y)
		{
			// Parameterized Constructor
			this->x=x;
			this->y=y;
		}
		Point(Point &obj)
		{
			// Copy Constructor
			this->x = obj.x;
			this->y = obj.y;
		}
		void display()
		{
			cout<<"(x,y):("<<this->x<<","<<this->y<<")"<<endl;
		}
};
int main(void)
{
	Point obA;
	cout<<"Default Constructor Values"<<endl;
	obA.display();
	int x,y;
	cout<<"Enter the x value"<<endl;
	cin>>x;
	cout<<"Enter the y value"<<endl;
	cin>>y;
	Point obB(x,y);
	cout<<"Parameterized Constructor Values"<<endl;
	obB.display();
	Point obC(obB);
	cout<<"Copy Constructor Values from Parameterized Constructor Values"<<endl;
	obC.display();
}
