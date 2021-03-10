/*
	Q. Create a base class Account (Account Name, Account Contact).
	Derive 2 class 
	Saving (Account No, Balance)
	Current (Account No , Balance)
	Write a C++ menu driven program to acheive following functionality.
	1. Accept details of 'n' account holders
	2. Display details of 'n' account holders by calculating the interest with 
	interest rate 5% on Saving Account and 1.5% on Current Account
*/
#include<iostream>
#include<string.h>
using namespace std;
class Account{
	private:
		char name[50];
		char contact[50];
	public:
		Account()
		{
			strcpy(this->name,"John");
			strcpy(this->contact,"9881783270");
		}
		Account(char name[50], char contact[50])
		{
			strcpy(this->name,name);
			strcpy(this->contact,contact);
		}
		void display()
		{
			cout<<"Account Name:"<<this->name<<endl;
			cout<<"Account Contact:"<<this->contact<<endl;
		}
};
class Saving_Account:public Account{
	private:
		char ano[50];
		double balance;
		double interestAmount;
	public:
		Saving_Account()
		{
			strcpy(this->ano,"AX101");
			this->balance=5000;
			this->interestAmount = 250;
		}
		Saving_Account(char name[50],char contact[50],char ano[50],double balance):Account(name,contact)
		{
			strcpy(this->ano,ano);
			this->balance = balance;
		}
		void interestCalculation()
		{
			this->interestAmount = this->balance * 0.05;
			cout<<"Interest Amount by {5%}:"<<this->interestAmount<<endl;
		}
		void display()
		{
			Account::display();
			cout<<"Account Number:"<<this->ano<<endl;
			cout<<"Account Balance:"<<this->balance<<endl;
			cout<<"Interest Amount by {5%}:"<<this->interestAmount<<endl;
		}
};
class Current_Account:public Account{
	private:
		char cno[50];
		double cbalance;
		double cinterestAmount;
	public:
		Current_Account()
		{
			strcpy(this->cno,"AX101");
			this->cbalance=5000;
			this->cinterestAmount = 250;
		}
		Current_Account(char name[50],char contact[50],char cno[50],double cbalance):Account(name,contact)
		{
			strcpy(this->cno,cno);
			this->cbalance=cbalance;
		}
		void interestCalculation()
		{
			this->cinterestAmount = this->cbalance * 0.015;
			cout<<"Interest Amount by{1.5%}:"<<this->cinterestAmount<<endl;
		}
		void display()
		{
			Account::display();
			cout<<"Account Number:"<<this->cno<<endl;
			cout<<"Account Balance:"<<this->cbalance<<endl;
			cout<<"Interest Amount by{1.5%}:"<<this->cinterestAmount<<endl;
		}
};
int main(void)
{
	Saving_Account *ob = new Saving_Account[10];
	Current_Account *oj = new Current_Account[10];
	int save=0;
	int curr=0;
	int i;
	while(1)
	{
		cout<<"1. Enter the Saving Account Details:"<<endl;
		cout<<"2. Enter the Current Account Details:"<<endl;
		cout<<"3. Display All Saving Account Details:"<<endl;
		cout<<"4. Display All Current Account Details:"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter the Choice"<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				{
					char name[50],contact[50],ano[50];
					double balance;
					cout<<"Enter the Name"<<endl;
					cin>>name;
					cout<<"Enter the Contact"<<endl;
					cin>>contact;
					cout<<"Enter the Account No"<<endl;
					cin>>ano;
					cout<<"Enter the Opening Balance"<<endl;
					cin>>balance;
					ob[save] = Saving_Account(name,contact,ano,balance);
					ob[save].interestCalculation();
					save++;
					break;
				}
			case 2:
				{
					char name[50],contact[50],ano[50];
					double balance;
					cout<<"Enter the Name"<<endl;
					cin>>name;
					cout<<"Enter the Contact"<<endl;
					cin>>contact;
					cout<<"Enter the Account No"<<endl;
					cin>>ano;
					cout<<"Enter the Opening Balance"<<endl;
					cin>>balance;
					oj[curr] = Current_Account(name,contact,ano,balance);
					oj[curr].interestCalculation();
					curr++;
					break;
				}
			case 3:
				{
					cout<<"All Saving Account"<<endl;
					for(int i = 0;i < save ; i++)
					{
						cout<<"---------------------"<<endl;
						ob[i].display();
						cout<<"---------------------"<<endl;
					}
						break;
				}
			case 4:
				{
					cout<<"All Current Account"<<endl;
					for(int i = 0;i < curr ; i++)
					{
						cout<<"---------------------"<<endl;
						oj[i].display();
						cout<<"---------------------"<<endl;
					}
						break;
				}
			case 5:
				{
					exit(0);
					break;
				}
			default:
				{
					cout<<"Invalid Option"<<endl;
				}		
		}
	}
}
