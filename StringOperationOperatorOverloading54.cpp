/*
	Q. Create class MyString which contains character pointer (use new operator)
		Write a C++ program to overload following operators
		1. To change case of each alphabet from given string
		2. To print characte present at specified index
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
class MyString{
	private:
		char *stringContent;
	public:
		MyString()
		{
			stringContent = new char[10];
			strcpy(this->stringContent,"NA");
		}
		MyString(char stringContent[20])
		{
			int length = strlen(stringContent);
			this->stringContent = new char[length+1];
			strcpy(this->stringContent,stringContent);
		}
		void operator ! ()
		{
			int length = strlen(this->stringContent);
			int i;
			for(i=0;i<length;i++)
			{
				if(this->stringContent[i]>=65 && this->stringContent[i]<=90)
					this->stringContent[i] = tolower(this->stringContent[i]);
				else if(this->stringContent[i]>=97 && this->stringContent[i]<=122)
					this->stringContent[i] = toupper(this->stringContent[i]);
			}
		}
		void operator [](int index)
		{
			if(index>strlen(this->stringContent))
				cout<<"Invalid Index"<<endl;
			else
				cout<<"Element at index: "<<index<<" is:"<<this->stringContent[index]<<endl;
		}
		void display()
		{
			cout<<"Content of String:"<<this->stringContent<<endl;
		}
};
int main()
{
	char string[50];
	cout<<"Enter the String:"<<endl;
	cin>>string;
	MyString object(string);
	object.display();
	!(object);
	object.display();
	int index;
	cout<<"Enter the Position:"<<endl;
	cin>>index;
	object[index];
	return 0;
}
