/*
	Q: Write a C++ program to create class Item with data members Item_code, Item_name,Item_price.
	   Write a member function to accept and display number of objects created for class.
	   Use Static Data Member and Member Function
	   */
#include<string.h>
using namespace std;
class Item{
	private:
		char itemCode[5];
		char itemName[100];
		double itemPrice;
	public:
		static int count;
		Item()
		{
			strcpy(this->itemCode,"XXXXX");
			strcpy(this->itemName,"NA");
			this->itemPrice = 0.0;
		}
		Item(char itemCode[5],char itemName[100], double itemPrice)
		{
			strcpy(this->itemCode,itemCode);
			strcpy(this->itemName,itemName);
			this->itemPrice = itemPrice;
			counter();
		}
		void display()
		{
			cout<<"Item Code:"<<this->itemCode<<"\n"<<"Item Name:"<<this->itemName<<"\n"<<"Item Price:"<<this->itemPrice<<endl;
		}
		void counter()
		{
			count++;
		}	
		static void displayCount()
		{
			cout<<"Object Count:"<<count<<endl;
		}
};
int Item::count=0;
int main()
{
	int ch,c=0;
	Item *obj = new Item[10];
	while(true)
	{
		cout<<"1. Add Item"<<endl;
		cout<<"2. Count of Item"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Enter the Choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					char itemCode[5], itemName[100];
					double itemPrice;
					cout<<"Enter the Item Code"<<endl;
					cin>>itemCode;
					cout<<"Enter the Item Name"<<endl;
					cin>>itemName;
					cout<<"Enter the Item Price"<<endl;
					cin>>itemPrice;
					obj[c] = Item(itemCode,itemName,itemPrice);
					obj[c].display();
					c++;
					break;
				}
			case 2:
				{
					Item::displayCount();
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
