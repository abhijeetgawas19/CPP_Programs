/*
	Create a Class Distance which contains members as Kilometer and Meter.
	Write C++ program to perform following functions:
	1. To accept distance
	2. To display distance
	3. Overload += operator to add 2 distances.
	4. Overload > operator to comapre 2 distances.
*/
#include<iostream>
using namespace std;
class Distance{
	private:
		int kilometer,meter;
	public:
		Distance()
		{
			this->kilometer = 0;
			this->meter = 0;
		}
		Distance(int kilometer, int meter)
		{
			this->kilometer = kilometer;
			this->meter = meter;
		}
		void accept(int kilometer,int meter)
		{
			this->kilometer = kilometer;
			this->meter = meter;
		}
		void display()
		{
			cout<<"Distance:"<<this->kilometer<<" KM "<<this->meter<<" M"<<endl;
		}
		Distance operator +=(Distance object)
		{
			Distance newObject;
			newObject.kilometer = this->kilometer + object.kilometer;
			newObject.meter = this->meter + object.meter;
			return newObject;
		}
		Distance operator >(Distance object)
		{
			Distance newObject;
			int meter = this->kilometer * 1000;
			meter += this->meter;
			
			int meter_ = object.kilometer * 1000;
			meter_ += object.meter;
			
			if(meter>meter_)
			{
				newObject.kilometer = this->kilometer;
				newObject.meter = this->meter;
			}
			else
			{
				newObject.kilometer = object.kilometer;
				newObject.meter = object.meter;
			}
				return newObject;
		}
};
int main(void)
{
	Distance first,second,summation,compare;
	first.accept(5,256);
	second.accept(5,255);
	first.display();
	second.display();
	summation = first += second;
	summation.display();
	compare = first > second;
	cout<<"Greater Distance"<<endl;
	compare.display();
}
