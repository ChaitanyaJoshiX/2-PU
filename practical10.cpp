/*
WAP to find sum of the series 1 + x + x^2 + x^3 + ….x^n using
constructors.

@ChaitanyaJoshiX
*/
#include <iostream.h>
#include <conio.h>
#include <math.h>

class SumSeries
{
  public:
  int x, n;
  double sum;
  SumSeries()
  {
    sum = 1;
  }
  void input()
  {
    cout << "The series is 1 + x + x2 + ... xn" << endl;
    cout << "Enter x and n : ";
    cin >> x >> n;
  }
  void calculate()
  {
    int i;
    for(i=1; i<=n; i++)
    {
      sum += pow(x,i);
    }
  }
  void display()
  {
    cout << "Sum of series = " << sum << endl;
  }
};

void main()
{
  clrscr();
  SumSeries obj;
  obj.input();
  obj.calculate();
  obj.display();
  getch();
}
