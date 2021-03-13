/*
	Q: Write C++ program to find area and volume of cylinder
	(Make use of Inline Function)
*/
#include<iostream>
#include<iomanip>
# define PI 3.14
inline void area(double radius, double height)
{
	double area_ = (2 * PI * radius * height) + (2 * PI * radius * radius);
	std::cout<<"Area of Cylinder::"<<std::fixed<<std::setprecision(2)<<area_<<std::endl;
}
inline void volume(double radius, double height)
{
	double vol = (PI * radius * radius * height);
	std::cout<<"Volume of Cylinder::"<<std::fixed<<std::setprecision(2)<<vol<<std::endl;
}
int main()
{
	int ch;
	while(true)
	{
		std::cout<<"1. Area of Cylinder"<<std::endl;
		std::cout<<"2. Volume of Cylinder"<<std::endl;
		std::cout<<"3. Exit"<<std::endl;
		std::cout<<"Enter the Choice"<<std::endl;
		std::cin>>ch;
		switch(ch)
		{
			case 1:
				{
					double radius,height;
					std::cout<<"Enter the Radius"<<std::endl;
					std::cin>>radius;
					std::cout<<"Enter the Height"<<std::endl;
					std::cin>>height;
					area(radius,height);
					break;
				}
			case 2:
				{
					double radius,height;
					std::cout<<"Enter the Radius"<<std::endl;
					std::cin>>radius;
					std::cout<<"Enter the Height"<<std::endl;
					std::cin>>height;
					volume(radius,height);
					break;
				}
			case 3:
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
