/*
	Q. Write class Sales (Salesman_Name,Product_Name,Sales_Quantity,Target).
	   Each salesman deals with seperate product and is assigned a target for month.
	   At the end of the month his monthly sales is compared with target and commission is calculated.
	   - If Sales_Quantity>Target 
	   		Commission is 25% of extra sales made + 10% of target
	   - If Sales_Quantity==Target
	   		Commission is 10% of target
	   - Other 
	   		Commission is 0
	   Display the salesman information along with commission obtained.
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Sales{
	private:
		char sname[50];
		char pname[50];
		int sales_quant;
		int target;
	public:
		Sales()
		{
			strcpy(this->sname,"NA");
			strcpy(this->pname,"NA");
			this->sales_quant=0;
			this->target=0;
		}
		Sales(char sname[50],char pname[50],int sales_quant,int target)
		{
			strcpy(this->sname,sname);
			strcpy(this->pname,pname); 
			this->sales_quant = sales_quant;
			this->target = target;
		}
		float commiCalc()
		{
			float comm=0;
			if(this->sales_quant>this->target)
			{
				 int extra = this->sales_quant - this->target;
				 comm = extra * (0.25);
				 comm = comm + (this->target * 0.10);
				 cout<<"Commission Gained::"<<comm<<endl;
			}
			else if(this->sales_quant==this->target)
			{
				comm = comm * (this->target * 0.10);
				cout<<"Commission Gained::"<<comm<<endl;
			}
			else
			{
				cout<<"Commission Gained::"<<comm<<endl;
			}
		}
		void display()
		{
			cout<<"Sales Man Name::"<<this->sname<<endl;
			cout<<"Product Name::"<<this->pname<<endl;
			cout<<"Sales Quantity::"<<this->sales_quant<<endl;
			cout<<"Target::"<<this->target<<endl;
		}
};
int main()
{
	int ch;
	while(true)
	{
		cout<<"-------------------------"<<endl;
		cout<<"1.Check Commision"<<endl;
		cout<<"2.Exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		cout<<"---------------------------"<<endl;
		switch(ch)
		{
			case 1:
				{
					char sname[50],pname[50];
					int sales,target;
					cout<<"Enter the Sales Man Name:"<<endl;
					cin>>sname;
					cout<<"Enter the Product Name:"<<endl;
					cin>>pname;
					cout<<"Enter the Sales Quantity"<<endl;
					cin>>sales;
					cout<<"Enter the Target Quantity"<<endl;
					cin>>target;
					Sales obj (sname,pname,sales,target);
					obj.display();
					obj.commiCalc();
					break;
				}
			case 2:
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
