/*
WAP to find the area of square/rectangle/triangle using
function overloading.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>

class Area
{
    public:
    double l, b;
    double s, s1, s2, s3;
    double area;
    double area();
};

double area(l) // For square
{
    area = l*l;
    return area;
}

double area(l, b) // For rectangle
{
    area = l * b;
    return area;
}

double area(s1, s2, s3) // For triangle
{
    s = (s1 + s2 + s3) / 2;

}
void main()
{
    Area obj; // Creating obj of Area class
    int choice
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
        cout << "Area of square = " << obj.area(l) << endl;
        break;

        case 2: cout << "You have chosen rectangle. " << endl;
        cout << "Enter length and breadth : ";
        cin >> l >> b;
        cout << "Area of rectangle = " << obj.area(l, b) << endl;
        break;

        case 3: cout << "You have chosen triangle. " << endl;
        cout << "Enter side1, side2, side3 : ";
        cin >> l >> b;
        cout << "Area of Triangle = " << obj.area(sl, s2, s3) << endl;
        break;

        default : cout << "Invalid choice! " << endl;
    }
}
