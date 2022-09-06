/*
WAP to create a class with data members a, b, c and member
functions to input data, compute the discriminant
and print the roots.
Conditions :
1. If dis = 0, print that the roots are equal and their value.
2. If dis > 0, print that the roots are real and their values.
3. If dis < 0, print that the roots are imaginary and
   end the program.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

class Quadratic
{
  public:
  int a, b, c;
  double dis, root1, root2;
  void input();
  void calculate();
  void display();
};

void Quadratic::input()
{
    cout << "A quadratic eqn has form : ax2 + bx + c" << endl;
    cout << "Enter a, b and c : ";
    cin >> a >> b >> c;
}

void Quadratic::calculate()
{
    dis = (b*b) - (4 * a * c);
}

void Quadratic::display()
{
    if(dis < 0)
    {
        cout << "The roots are imaginary." << endl;
        exit(0);
    }

    root1 = (-b + sqrt(dis)) / (2*a);
    root2 = (-b - sqrt(dis)) / (2*a);

    if(dis == 0)
    {
        cout << "The roots are equal." << endl;
    }
    else(dis > 0)
    {
        cout << "The roots are real." << endl;
    }

    // Displaying the roots
    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;
}

void main()
{
  clrscr();
  Quadratic obj;
  obj.input();
  obj.calculate();
  obj.display();
  getch();
}
