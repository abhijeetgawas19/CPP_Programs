/*
	Q. Create a C++ program to demonstrate function overloading:
	Create 3 function
	- int sum (int, int) return addition of 2 integer values
	- float sum (int, int) return addition of 2 floating values
	- int sum (int [],int) return sum of n array elements.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int sum (int,int);
float sum (float,float,float);
int sum (int arr[],int n);
int main(void)
{
	int ch;
	while(true)
	{
		cout<<"1.Add 2 Integers:"<<endl;
		cout<<"2.Add 3 Float/Decimal Numbers:"<<endl;
		cout<<"3.Summation of n array elements:"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					int a,b;
					cout<<"Enter the First Integer Value"<<endl;
					cin>>a;
					cout<<"Enter the Second Integer Value"<<endl;
					cin>>b;
					cout<<"Sum of 2 Integer Value:"<<sum(a,b)<<endl;
					break;
				}
			case 2:
				{
					float a,b,c;
					cout<<"Enter the First Floating Value"<<endl;
					cin>>a;
					cout<<"Enter the Second Floating Value"<<endl;
					cin>>b;
					cout<<"Enter the Third Floating Value"<<endl;
					cin>>c;
					cout<<"Sum of 3 Floating Point Value:"<<sum(a,b,c)<<endl;
					break;
				}
			case 3:
				{
					int n,i;
					cout<<"Enter the Size of Array"<<endl;
					cin>>n;
					int arr[n];
					cout<<"Enter the "<<n<<" element"<<endl;
					for(i=0;i<n;i++)
					{
						cin>>arr[i];
					}
					cout<<"Array Elements are:"<<endl;
					for(i=0;i<n;i++)
					{
						cout<<arr[i]<<" ";
					}
						cout<<endl;
					cout<<"Sum of Array with "<<n<<" elements are::"<<sum(arr,n)<<endl;
					break;
				}
			case 4:
				{
					exit(0);
					break;
				}
			default:
				{
					cout<<"Invalid Value"<<endl;
				}
		}
	}
}
int sum(int a,int b)
{
	return a+b;
}
float sum(float a, float b, float c)
{
	return a+b+c;
}
int sum(int arr[],int n)
{
	int total =0;
	int i;
	for(i=0;i<n;i++)
	{
		total+=arr[i];
	}
		return total;
}

