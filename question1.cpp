#include <iostream>
using namespace std;

class box
{
	public:
		double length;
		double height;
		double bredth;
};
int main()
{
	box box1;
	box box2;
	double volume = 0;
	box1.height = 5;
	box1.length = 7;
	box1.bredth = 5.5;
	box2.length = 4;
	box2.bredth = 9;
	box2.height = 6.8;
	volume = box1.length*box1.height*box1.bredth;
	cout <<"Volume of box one = "<<volume<<endl;
	volume = box2.length*box2.height*box2.bredth;
	cout <<"Volume of box two ="<<volume;
}