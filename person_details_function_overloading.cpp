/*
	Create Class Person which contains data members as
	Person Id,
	Person Name,
	Nationality
	Gender
	Date of Birth
	Date of Issue
	Date of Expiry
	Write a C++ program to perform following member functions:
		a. Enter the Details of all persons
		b. Display passport details of one person
		c. Display passport details of all persons.
		(Use function overloading and Array of Object)
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Person{
	private:
		int personId;
		char personName[100];
		char personNationality[100];
		char personGender;
		char dob[100];
		char doi[100];
		char doe[100];
	public:
		// Constructors
		Person()
		{
			this->personId = 0;
			strcpy(this->personName,"NA");
			strcpy(this->personNationality,"NA");
			this->personGender = 'M';
			strcpy(this->dob,"10/10/1997");
			strcpy(this->doi,"05/01/2010");
			strcpy(this->doe,"05/01/2025");	
		}
		Person(int personId, char *personName, char *personNationality, char personGender, char *dob, char *doi, char *doe)
		{
			this->personId=personId;
			strcpy(this->personName,personName);
			strcpy(this->personNationality,personNationality);
			this->personGender = personGender;
			strcpy(this->dob,dob);
			strcpy(this->doi,doi);
			strcpy(this->doe,doe);	
		}
		void displayPerson(int personId)
		{
			if(this->personId == personId)
			{
				cout<<"Person with Person ID:"<<personId<<endl;
				cout<<this->personId<<" "<<this->personName<<" "<<this->personNationality<<" "<<this->personGender<<" "<<this->dob<<" "<<this->doi<<" "<<this->doe<<endl;
			}
		}
		void displayPerson()
		{
			cout<<this->personId<<" "<<this->personName<<" "<<this->personNationality<<" "<<this->personGender<<" "<<this->dob<<" "<<this->doi<<" "<<this->doe<<endl;
		}
};
int main(void)
{
	int n,i;
	cout<<"Enter the number of records"<<endl;
	cin>>n;
	Person* arr = new Person[n];
	// Details
	int personId;
	char personName[100];
	char personNationality[100];
	char personGender;
	char dob[100];
	char doi[100];
	char doe[100];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Person Id"<<endl;
		cin>>personId;
		cout<<"Enter the Person Name"<<endl;
		cin>>personName;
		cout<<"Enter the Person Nationality"<<endl;
		cin>>personNationality;
		cout<<"Enter the Person Gender [M/F]"<<endl;
		cin>>personGender;
		cout<<"Enter the Date of Birth"<<endl;
		cin>>dob;
		cout<<"Enter the Date of Issue"<<endl;
		cin>>doi;
		cout<<"Enter the Date of Expiry"<<endl;
		cin>>doe;
		arr[i] = Person(personId,personName,personNationality,personGender,dob,doi,doe);	
	}
	// Search for record
	int id;
	cout<<"Enter the ID to be searched"<<endl;
	cin>>id;
	for(i=0;i<n;i++)
	{
		arr[i].displayPerson(id);
	}
	// Display all records
	cout<<"All License Details"<<endl;
	for(i=0;i<n;i++)
	{
		arr[i].displayPerson();
	}
}
