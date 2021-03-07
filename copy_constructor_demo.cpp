/*
	Write a C++ program to create class Part which contains data member as
	Part_id, Part_Name, Part_Price.
	Create and Initialize all value of Part object using parameterized constructor 
	and copy constructor.
	Display the values of Part Object (Part_Price should be right justified with precision 2)

*/
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class Part{
	private:
		int pid;
		char pname[100];
		double pprice;
	public:
		Part()
		{
			this->pid = 1;
			strcpy(this->pname,"Pencil");
			this->pprice=20.50;
		}
		Part(int pid, char *pname,double pprice)
		{
			this->pid = pid;
			strcpy(this->pname,pname);
			this->pprice = pprice;
		}
		Part(Part &obj)
		{
			this->pid = obj.pid;
			strcpy(this->pname,obj.pname);
			this->pprice = obj.pprice;
		}
		void display()
		{
			cout<<"Part ID:"<<this->pid<<endl;
			cout<<"Part Name:"<<this->pname<<endl;
			cout<<"Part Price:"<<setprecision(2)<<right<<this->pprice<<endl;
		}
};
int main(void)
{
	int pid;
	double pprice;
	char pname[100];
	cout<<"Enter the Part ID:"<<endl;
	cin>>pid;
	cout<<"Enter the Part Name:"<<endl;
	cin>>pname;
	cout<<"Enter the Part Price:"<<endl;
	cin>>pprice;
	// Create obj
	cout<<"------------------------"<<endl;
	cout<<"Default Object Contents"<<endl;
	Part ob1;
	ob1.display();
	Part ob2(pid,pname,pprice);
	cout<<"------------------------"<<endl;
	cout<<"Parameterized Object Contents"<<endl;
	ob2.display();
	cout<<"------------------------"<<endl;
	cout<<"Copied Object Contents"<<endl;
	Part ob3(ob2);
	ob3.display();
	
}

