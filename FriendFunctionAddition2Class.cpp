/*
	Q: Write a C++ program to calculate maximum of 2 integer
	of 2 different class (Use friend function)
*/
#include<iostream>
using namespace std;
class NumberTwo;
class NumberOne
{
	private:
		int x;
	public:
		NumberOne()
		{
			this->x=0;
		}
		NumberOne(int ele)
		{
			this->x = ele;
		}
		void display()
		{
			cout<<"Element of Class NumberOne:"<<this->x<<endl;
		}
		friend int comparision(NumberOne,NumberTwo);
};
class NumberTwo
{
	private:
		int y;
	public:
		NumberTwo()
		{
			this->y = 0;
		}
		NumberTwo(int ele)
		{
			this->y = ele;
		}
		void display()
		{
			cout<<"Element of Class NumberTwo:"<<this->y<<endl;
		}
		friend int comparision(NumberOne,NumberTwo);
};

int comparision(NumberOne A, NumberTwo B)
{
	if(A.x>B.y)
		return 1;
	else if(A.x<B.y)
		return 2;
	else
		return 0;
}

int main(void)
{
	int x,y;
	cout<<"Enter the First Element:"<<endl;
	cin>>x;
	cout<<"Enter the Second Element:"<<endl;
	cin>>y;
	NumberOne obj(x);
	NumberTwo obk(y);
	obj.display();
	obk.display();
	int resultant = comparision(obj,obk);
	if(resultant==1)
		cout<<"First Element is Greater::"<<x<<endl;
	else if(resultant==2)
		cout<<"Second Element is Greater::"<<y<<endl;
	else
		cout<<"Both are equal::"<<x<<","<<y<<endl;
}
