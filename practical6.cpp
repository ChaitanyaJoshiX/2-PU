/*
WAP to create a class with data members principle, time and
rate. Create member functions to accept data values to compute simple
interest and to display the result.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>

class SimpleInterest
{
  public:
  double principle , time, rate;
  double si;
  void input();
  void calculate();
  void display();
};

void SimpleInterest::input()
{
    cout << "Enter the principle : ";
    cin >> principle ;
    cout << "Enter the time period (in years) : ";
    cin >> time;
    cout << "Enter the rate of interest : ";
    cin >> rate;
}

void SimpleInterest::calculate()
{
    si = (principle * time * rate) / 100.0;
}

void SimpleInterest::display()
{
    cout << "Principal : " << principle << endl;
    cout << "Time : " << time << endl;
    cout << "Rate : " << rate << "% " << endl;
    cout << "Simple Interest = " << si << endl;
}

void main()
{
  clrscr();
  SimpleInterest obj;
  obj.input();
  obj.calculate();
  obj.display();
  getch();
}
