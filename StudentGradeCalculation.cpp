/*
	Create a base class Student (Roll No, Name) which derives two classess
	Academics_Marks(Mark1,Mark2,Mark3) and
	Extra_Activities(Mark).
	Class Result(Total_Marks,Percentage,Grade) inherits from Academics_Marks and Extra_Activities class
	Make use of setprecision and Virtual Base Class
	Calculate Total, Percentage, Grade.
*/
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
class Student{
	private:
		int rollNo;
		char studentName[100];
	public:
		Student()
		{
			this->rollNo = 1;
			strcpy(this->studentName,"Abhijeet");
		}
		Student(int rollNo, char studentName[100])
		{
			this->rollNo = rollNo;
			strcpy(this->studentName,studentName);
		}
		void display()
		{
			cout<<"Student Roll No:"<<this->rollNo<<endl;
			cout<<"Student Name:"<<this->studentName<<endl;
		}
};
class Academics_Marks: public virtual Student
{
	private:
		int physicsMarks;
		int chemistryMarks;
		int mathsMarks;
	public:
		Academics_Marks()
		{
			this->physicsMarks = 35;
			this->chemistryMarks = 35;
			this->mathsMarks = 35;
		}
		Academics_Marks(int physicsMarks, int chemistryMarks, int mathsMarks)
		{
			this->physicsMarks = physicsMarks;
			this->chemistryMarks = chemistryMarks;
			this->mathsMarks = mathsMarks;
		}
		int pmarks()
		{
			return (this->physicsMarks);
		}
		int cmarks()
		{
			return (this->chemistryMarks);
		}
		int mmarks()
		{
			return (this->mathsMarks);
		}
		void display()
		{
			cout<<"Physics Marks:"<<this->physicsMarks<<endl;
			cout<<"Chemistry Marks:"<<this->chemistryMarks<<endl;
			cout<<"Mathematics Marks:"<<this->mathsMarks<<endl;
		}
};
class Extra_Activites:public virtual Student{
	private:
		int sportsMarks;
	public:
		Extra_Activites()
		{
			this->sportsMarks = 35;
		}
		Extra_Activites(int sportsMarks)
		{
			this->sportsMarks = sportsMarks;
		}
		int smarks()
		{
			return (this->sportsMarks);
		}
		void display()
		{
			cout<<"Sports Marks:"<<this->sportsMarks<<endl;
		}
};
class Result: public Academics_Marks, Extra_Activites{
	private:
		int total;
		double per;
		char grade[50];
	public:
		Result()
		{
			this->total = 105;
			this->per = 35.00;
			strcpy(grade,"Pass Class");
		}
		Result(int rollNo, char studentName[100], int pmarks, int cmarks, int mmarks, int smarks):Academics_Marks(pmarks,cmarks,mmarks),Extra_Activites(smarks),Student(rollNo,studentName)
		{
			
		}
		void resultCalculation()
		{
			int physics = this->pmarks();
			int chemistry = this->cmarks();
			int maths = this->mmarks();
			int sports = this->smarks();
			this->total = physics + chemistry + maths + sports;
			Student::display();
			Academics_Marks::display();
			Extra_Activites::display();
			cout<<"Total:"<<this->total<<endl;
			this->per = (double)this->total / 4;
			cout<<"Percentage:"<<setprecision(2)<<this->per<<endl;
			if(this->per>=74.50 && this->per<=100.00)
			{
				strcpy(this->grade,"First Class with Distinction");	
			}
			else if(this->per>=59.50 && this->per<=74.49)
			{
				strcpy(this->grade,"First Class");
			}
			else if (this->per>=49.50 && this->per<=59.49)
			{
				strcpy(this->grade,"Second Class");
			}
			else if (this->per>=40.50 && this->per<=49.49)
			{
				strcpy(this->grade,"Pass Class");
			}
			else
			{
				strcpy(this->grade,"Fail");
			}
			cout<<"Grade:"<<this->grade<<endl;
		}
};
int main()
{
	// Accept Information from user
	int rollno,pmarks,cmarks,mmarks,smarks;
	char name[100];
	cout<<"Enter the Roll No:"<<endl;
	cin>>rollno;
	cout<<"Enter the Name"<<endl;
	cin>>name;
	cout<<"Enter the Physics Marks"<<endl;
	cin>>pmarks;
	cout<<"Enter the Chemistry Marks"<<endl;
	cin>>cmarks;
	cout<<"Enter the Maths Marks"<<endl;
	cin>>mmarks;
	cout<<"Enter the Sports Marks"<<endl;
	cin>>smarks;
	cout<<"Result Tally"<<endl;
	Result obj = Result(rollno,name,pmarks,cmarks,mmarks,smarks);
	obj.resultCalculation();
}
