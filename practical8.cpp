/*
WAP to find the area of square/rectangle/triangle using
function overloading.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>
#include <math.h>

class Area
{
  public:
  double area, s;

	// Functions are written under class itself  to avoid errors of parameters.
	double Area::CalcArea(double l) // For square
	{
		area = l*l;
		return area;
	}

	double Area::CalcArea(double l, double b) // For rectangle
	{
		area = l * b;
		return area;
	}

	double Area::CalcArea(double s1, double s2, double s3) // For triangle
	{
		s = (s1 + s2 + s3) / 2;
		area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
		return area;
	}
};

void main()
{
    clrscr();
    double l, b;
    double s1, s2, s3;
    Area obj; // Creating obj of Area class
    int choice;
    cout << "Choices" << endl;
    cout << "1. Square " << endl;
    cout << "2. Rectangle " << endl;
    cout << "3. Triangle " << endl;
    cout << "Enter your choice (1/2/3) : ";
    cin >> choice;

    switch(choice)
    {
        case 1: cout << "You have chosen square. " << endl;
        cout << "Enter side : ";
        cin >> l;
        cout << "Area of square = " << obj.CalcArea(l) << endl;
        break;

        case 2: cout << "You have chosen rectangle. " << endl;
        cout << "Enter length and breadth : ";
        cin >> l >> b;
        cout << "Area of rectangle = " << obj.CalcArea(l, b) << endl;
        break;

        case 3: cout << "You have chosen triangle. " << endl;
        cout << "Enter side1, side2, side3 : ";
        cin >> s1 >> s2 >> s3;
        cout << "Area of Triangle = " << obj.CalcArea(s1, s2, s3) << endl;
        break;

        default : cout << "Invalid choice! " << endl;
    }
    getch();  
}
