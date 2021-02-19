/*
	Write a C++ program to create class Worker with datamembers as Worker_Name, No of Hours, Pay Rate.
	Write a neccessary member function to calculate and display the salary of worker.
	Use default payrate.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Worker{
	private:
		char workerName[100];
		int hoursWorked;
		float payRate;
	public:
		Worker() // Default Constructor
		{
			strcpy(workerName,"NA");
			hoursWorked = 2;
			payRate = 275;
		}
		Worker(char workername[],int hoursWorked,float payRate=275.0) // Parameterized Constructor
		{
			strcpy(this->workerName,workername);
			this->hoursWorked = hoursWorked;
			this->payRate = payRate;
		}
		void calculate()
		{
			int sal = (int) payRate * hoursWorked;
			//cout<<sal;
			display(sal);
		}
		void display(int sal)
		{
			cout<<"Worker Name: "<<this->workerName<<"\nWorked Hours: "<<this->hoursWorked<<"\nSalary: "<<sal<<endl;
		}
};
int main(void)
{
	// Create Object
	char workerName[50];
	int workingHours;
	cout<<"Enter the Worker Name"<<endl;
	cin>>workerName;
	cout<<"Enter the Worked Hours"<<endl;
	cin>>workingHours;
	Worker obj = Worker(workerName,workingHours);
	obj.calculate();
}
