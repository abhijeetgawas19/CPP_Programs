/*
	Q: Write a class with contains 2 data members.
	Write a function to accept display and swap entered numbers.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Swap{
	private:
		int x,y;
	public:
		Swap()
		{
			this->x=this->y=0;
		}
		Swap(int x,int y)
		{
			this->x = x;
			this->y = y;
		}
		void accept(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void swap()
		{
			int temp;
			temp = (this->x);
		    (this->x)= (this->y);
			(this->y)= temp;
		}
		void display()
		{
			cout<<this->x<<","<<this->y<<endl;
		}
};
int main(void)
{
	int x,y;
	cout<<"Enter the 1st Element"<<endl;
	cin>>x;
	cout<<"Enter the 2nd Element"<<endl;
	cin>>y;
	if(x==y)
	{
		cout<<"Both Elements are equal swapping won't produce result"<<endl;
		exit(0);
	}
	Swap obj;
	obj.accept(x,y);
	cout<<"Before Swap"<<endl;
	obj.display();
	cout<<"After Swap"<<endl;
	obj.swap();
	obj.display();
}
