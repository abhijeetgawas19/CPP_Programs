/*
	Q. Create College containing data members as
	College_ID, College_Name, Establishment_Year, University_Name
	Write a C++ program with following member function
	i. To accept college details
	ii. To display College details of Specified University
	iii.. To display College details according to specified establishment year
	(Use Array of Objects and Function Overloading)
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int objectCount=0;
class College{
	private:
		char collegeID[5];
		char collegeName[100];
		int year;
		char uniName[100];
	public:
		College()
		{
			strcpy(this->collegeID,"NA");
			strcpy(this->collegeName,"NA");
			this->year = 0;
			strcpy(this->uniName,"NA");
		}
		College(char *collegeID, char *collegeName, int year, char *uniName)
		{
			strcpy(this->collegeID,collegeID);
			strcpy(this->collegeName,collegeName);
			this->year = year;
			strcpy(this->uniName,uniName);
		}
		void display()
		{
			cout<<"-------------------------------------"<<endl;
			cout<<"College ID:"<<this->collegeID<<endl;
			cout<<"College Name:"<<this->collegeName<<endl;
			cout<<"Year of Establishment"<<this->year<<endl;
			cout<<"Affliated University Name"<<this->uniName<<endl;
			cout<<"-------------------------------------"<<endl;
		}
		void collegeDetails(char *uniName)
		{
			int i=0;
			if(strcmp(this->uniName,uniName)==0)
			{
				i++;
				if(i==1)
					cout<<"College Details with University Name::"<<this->uniName<<endl;
				this->display();
			}
		}
		void collegeDetails(int year)
		{
			int i=0;
			if(this->year==year)
			{
				i++;
				if(i==1)
					cout<<"College Details with Establishment Year::"<<this->year<<endl;
				this->display();
			}
		}
};
int main()
{
	int ch;
	College *obj = new College[10];
	while(true)
	{
		cout<<"1. Enter the College Details"<<endl;
		cout<<"2. Search College Details based on Name of University"<<endl;
		cout<<"3. Search College Details based on Year of Establishment"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Enter the Choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					char collegeID[5],collegeName[100],uniName[50];
					int year;
					cout<<"Enter the College ID"<<endl;
					scanf(" %[^\n]",collegeID);
					cout<<"Enter the College Name"<<endl;
					scanf(" %[^\n]",collegeName);
					cout<<"Enter the Year of Establishment"<<endl;
					cin>>year;
					cout<<"Enter the University Name"<<endl;
					scanf(" %[^\n]",uniName);
					obj[objectCount] = College(collegeID,collegeName,year,uniName);
					objectCount++;
					break;
				}
			case 2:
				{
					char uniName[50];
					cout<<"Enter the University Name"<<endl;
					scanf(" %[^\n]",uniName);
					for(int i=0;i<objectCount;i++)
						obj[i].collegeDetails(uniName);
					break;
				}
			case 3:
				{
					int year;
					cout<<"Enter the Year of Establishment"<<endl;
					cin>>year;
					for(int i=0;i<objectCount;i++)
						obj[i].collegeDetails(year);
					break;
				}
			case 4:
				{
					exit(0);
				}
			default:
				{
					cout<<"Invalid Choice"<<endl;
				}
		}
	}
	return 0;
}
