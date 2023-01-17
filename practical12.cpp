/*
Create a class containing the following data members Register No, Name and Fees.
Also create a member function to read and display the data using the concept of
pointers to objects.

Author : @ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>
class Pointers
{
    public:
    long RegisterNo;
    char Name[20]; 
    double Fees;
    Pointers()
    {
        RegisterNo = 0L;
        Fees = 0.0;
    }
    void get() 
    {
        cout << "Enter your register number : ";
        cin >> RegisterNo;
        cout << "Enter your name : ";
        cin >> Name;
        cout << "Enter your fees : ";
        cin >> Fees;
    }
    void output() 
    {
        cout << "Name : " << Name << endl;
        cout << "Reg Number : " << RegisterNo << endl;
        cout << "Fees : " << Fees << endl;
    }
};

void main()
{
    clrscr();
    cout << "==========================" << endl;
    Pointers obj, *obj_ref;
    obj_ref = &obj; 
    cout << "Details : " << endl;
    cout << "==========================" << endl;
    obj_ref->get();
    cout << "==========================" << endl;
    obj_ref->output();  
    cout << "=================================" << endl;
    getch();
}
