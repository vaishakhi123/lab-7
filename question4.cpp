#include <iostream>
using namespace std;
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
  void Print();

// private data members x, y represent coordinates of the point:
public:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::Print()
{cout<<"("<<X<<","<<Y<<")";}


// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
class Rectangle:public Point
{private:
Point a1;
Point a2;
Point a3;
Point a4;
int l1;
int l2;
public:
 Rectangle()
 {a1.Set_X(0);
  a1.Set_Y(0);
  a2.Set_X(0);
  a2.Set_Y(1);
  a3.Set_X(1);
  a3.Set_Y(0);
  a4.Set_X(1);
  a4.Set_Y(1);}
 Rectangle(Point a,Point b)
 {a1.Set_X(a.X);
  a1.Set_Y(a.Y);
  a2.Set_X(a.X);
  a2.Set_Y(b.Y);
  a3.Set_X(b.X);
  a3.Set_Y(b.Y);
  a4.Set_X(b.X);
  a4.Set_Y(a.Y);}
  void Print()
  {a1.Print();
  cout<<"\n";
  a2.Print();
  cout<<"\n";
  a3.Print();
  cout<<"\n";
  a4.Print();
  cout<<"\n";}
  void side1()
  {l1=a2.Y-a1.Y;}
  void side2()
  {l2=a3.X-a2.X;}
  void area()
  {cout<<"The area of the rectangle is "<<l1*l2;}
  
};
// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 



// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
 p1.Print();
 cout<<"\n";
 p2.Print();
 cout<<"\n";

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
Rectangle r1(p1,p2);
r1.Print();
cout<<"\n";
r1.side1();
r1.side2();
r1.area();
  return 0;
}
