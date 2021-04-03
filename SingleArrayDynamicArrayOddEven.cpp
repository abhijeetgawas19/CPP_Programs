/*
	Write a C++ program to create class which contain single dimensional integer array of given size.
	Write a member function to display even and odd numbers from given array.
	Use Dynamic Constructor to Allocate and Destructor to free the memory.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class ArrayOddEvenResult{
	private:
		int *p,*o,*e;
		int x,j,k;
	public:
		ArrayOddEvenResult()
		{
			p = new int[10];
			o = new int[10];
			e = new int[10];
			this->x = 10;
			this->j=0;
			this->k=0;
		}
		ArrayOddEvenResult(int x)
		{
			p = new int[x];
			o = new int[x];
			e = new int[x];
			this->x = x;	
			this->j=0;
			this->k=0;
		}
		void accept()
		{
			int i;
			for(i=0;i<this->x;i++)
			{
				cout<<"Enter the Element"<<endl;
				cin>>p[i];
			}
		}
		void oddEven()
		{
			int i;
			for(i=0;i<this->x;i++)
			{
				if(p[i]%2==0)
				{
					e[j] = p[i];
					j++;
				}
				else
				{
					o[k] = p[i];
					k++;
				}
					
			}
		}
		void display()
		{
			int i;
			cout<<"Odd Elements"<<endl;
			for(i=0;i<this->k;i++)
				cout<<o[i]<<" ";
			cout<<endl;
			cout<<"Even Elements"<<endl;
			for(i=0;i<this->j;i++)
				cout<<e[i]<<" ";
			cout<<endl;
		}
		~ArrayOddEvenResult()
		{
			delete []p;
			delete []o;
			delete []e;
		}
};
int main()
{
	int size;
	cout<<"Enter the Size of 1D Array"<<endl;
	cin>>size;
	ArrayOddEvenResult obj = ArrayOddEvenResult(size);
	obj.accept();
	obj.oddEven();
	obj.display();
	return 0;
}
