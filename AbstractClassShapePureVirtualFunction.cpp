/*
	Q. Create base class Shape.
	Derive three different classes
	- Circle
	- Rectangle
	- Triangle
	from Shape class.
	Write a C++ program to calculate area of 
	- Circle
	- Rectangle
	- Triangle
	(Use pure virtual functiion).
*/
#include<iostream>
#include<iomanip>
class Shape{
	virtual void area()=0;
};
class Circle:public Shape
{
	private:
		int radius;
		float areaC;
	public:
		Circle()
		{
			this->radius = 0;
			this->areaC = 0.0;
		}
		Circle(int radius)
		{
			this->radius = radius;
			this->areaC = 0.0;
		}
		void area()
		{
			this->areaC = (float) (3.14 * this->radius * this->radius);
			std::cout<<"Area of Circle:"<<std::setprecision(2)<<this->areaC<<std::endl;
		}
};
class Rectangle:public Shape{
	private:
		int length,breadth,areaR;
	public:
		Rectangle()
		{
			this->length = 0;
			this->breadth = 0;
			this->areaR = 0;
		}
		Rectangle(int length, int breadth)
		{
			this->length = length;
			this->breadth = breadth;
			this->areaR = 0;
		}
		void area()
		{
			this->areaR = this->length * this->breadth;
			std::cout<<"Area of Rectangle:"<<this->areaR<<std::endl;
		}
};
class Triangle:public Shape{
	private:
		int base,height;
		float areaT;
	public:
		Triangle()
		{
			this->base = 0;
			this->height =0;
			this->areaT = 0.0;
		}
		Triangle(int base, int height)
		{
			this->base = base;
			this->height = height;
			this->areaT = 0.0;
		}
		void area()
		{
			this->areaT = (float)(0.5 * this->base * this->height);
			std::cout<<"Area of Triangle:"<<std::setprecision(2)<<this->areaT<<std::endl;
		}
};
int main()
{
	int ch;
	while(true)
	{
		std::cout<<"---------------------------"<<std::endl;
		std::cout<<"1.Area of Circle"<<std::endl;
		std::cout<<"2.Area of Rectangle"<<std::endl;
		std::cout<<"3.Area of Triangle"<<std::endl;
		std::cout<<"4.Exit"<<std::endl;
		std::cout<<"---------------------------"<<std::endl;
		std::cout<<"Enter your choice"<<std::endl;
		std::cin>>ch;
		switch(ch)
		{
			case 1:
				{
					int radius;
					std::cout<<"Enter the Radius:"<<std::endl;
					std::cin>>radius;
					Circle obj(radius);
					obj.area();
					break;
				}
			case 2:
				{
					int length,breadth;
					std::cout<<"Enter the Length:"<<std::endl;
					std::cin>>length;
					std::cout<<"Enter the Breadth:"<<std::endl;
					std::cin>>breadth;
					Rectangle obj(length,breadth);
					obj.area();
					break;
				}
			case 3:
				{
					int base,height;
					std::cout<<"Enter the Base:"<<std::endl;
					std::cin>>base;
					std::cout<<"Enter the Height"<<std::endl;
					std::cin>>height;
					Triangle obj(base,height);
					obj.area();
					break;
				}
			case 4:
				{
					exit(0);
					break;
				}
			default:
				{
					std::cout<<"Invalid Choice"<<std::endl;
				}
		}
	}
	return 0;
}
