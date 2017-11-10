#include <iostream>
using namespace std;
class box{
	public:
	double length;
	double breadth;
	double height;
	
	double calcvol()
	{
		return length*breadth*height;
	}
	
};
int main()
{
	box box1;
	double volume = 0;
	box1.length = 3;
	box1.breadth = 7;
	box1.height = 6;
	volume = box1.calcvol();
	cout <<"The volume of the box is = "<<volume;
}