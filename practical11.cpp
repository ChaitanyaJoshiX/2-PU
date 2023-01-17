/*
Create a base class containing the data member roll number and name. Also create a
member function to read and display the data using the concept of single level
inheritance. Create a derived class that contains marks of two subjects and total marks
as the data members.

Author : @ChaitanyaJoshiX
*/
#include <iostream.h>
#include <conio.h>
class Parent
{
    public:
    int roll;
    char name[20]; 
};
class Son : public Parent
{
    public:
    double mark1, mark2, total; 
    Son()
    {
        total = 0.0;
    }
    void read()
    {
        cout << "Enter roll number : ";
        cin >> roll;
        cout << "Enter name : "; 
        cin >> name;
        cout << "Enter marks of two subjects : "; 
        cin >> mark1 >> mark2;
        total = mark1 + mark2;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll number : " << roll << endl;
        cout << "Total marks : " << total << endl;
    }
};
void main()
{
    clrscr();
    int num, i;
    Son obj[10];
    cout << "How many students? : ";
    cin >> num;
    for(i=0; i<num; i++)
    {
        cout << "Enter details of student " << (i+1) << endl;
        obj[i].read(); 
        cout << "=================================" << endl;
    }
    for(i=0; i<num; i++)
    {
        cout << "Student " << (i+1) << endl;
        obj[i].display();
        cout << "=================================" << endl;
    }
    getch();
}
