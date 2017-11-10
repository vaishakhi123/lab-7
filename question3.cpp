#include <iostream>
using namespace std;
class rectangle{
	public:
	double length;
	double breadth;
	double area()
	{
		return length*breadth;
	}
	double perimeter(){
		return 2*(length+breadth);
	}
};
int main()
{
	rectangle rec1;
	rectangle rec2;
	double l,b,a1,a2,p1,p2;
	cout <<"Enter the length\n";
	cin >>l;
	rec1.length = l;
	cout <<"Enter the breadth of rectangle 1\n";
	cin>>b;
	rec1.breadth = b;
	cout<<"Enter the length of rectangle 2\n";
	cin>>l;
	rec2.length = l;
	cout<<"Enter the breadth of rectangle 2\n";
	cin>>b;
	rec2.breadth = b;
	a1 = rec1.area();
	p1 = rec1.perimeter();
	a2 = rec2.area();
	p2 = rec2.perimeter();
	if(a1>a2)
	cout <<"Area of first rectangle is greater than that of secon\n";
	else
	if(a1 == a2)
	cout <<"Both the triangles have an equal area\n";
	else
	cout<<"Area of second rectangle is greater than that of first\n";
	if(p1>p2)
	cout<<"The perimeter of first rectangle is greater than that of second\n";
	else 
	if(p1 == p2)
	cout<<"The perimeters of both rectangles are the same\n";
	else
	cout<<"The second rectangle has a greater perimeter than the first\n";
}