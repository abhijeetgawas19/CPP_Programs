/*
	Q. Create a class sellingBooth to emulate working of ticket selling shop.
		A Ticket worth rupees 5/-
		The members of sellingBooth os ticketSold and AmountGathered
		Write a program to perform following task
			1. To assign values
			2. To display both results.
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class sellingBooth
{
	private:
		int ticketCount;
		static int ticketAmountTotal;
		static int ticketTotal;
	public:
		sellingBooth()
		{
			this->ticketCount=0;
		}
		sellingBooth(int ticketCount)
		{
			this->ticketCount = ticketCount;
			this->ticketTotal += this->ticketCount;
			int amt = this->ticketCount * 5;
			this->ticketAmountTotal += amt;
			cout<<"Booked!!!!"<<endl;
		}
		static void displayCollections()
		{
			cout<<"Total Ticket Sold:"<<ticketTotal<<endl;
			cout<<"Total Amount Collected (Rs 5/-)"<<ticketAmountTotal<<endl;
		}
};
int sellingBooth::ticketAmountTotal=0;
int sellingBooth::ticketTotal=0;
int main()
{
	int ch;
	while(true)
	{
		cout<<"1. Book Ticket "<<endl;
		cout<<"2. Collections Report "<<endl;
		cout<<"3. Exit "<<endl;
		cout<<"Enter the Choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					int ticketCount;
					cout<<"No of Ticket to Booked"<<endl;
					cin>>ticketCount;
					sellingBooth obj(ticketCount);
					break;
				}
			case 2:
				{
					sellingBooth::displayCollections();
					break;
				}
			case 3:
				{
					exit(0);
					break;
				}
			default:
				{
					cout<<"Invalid Choice"<<endl;
				}
		}
	}
	return 0;
}
