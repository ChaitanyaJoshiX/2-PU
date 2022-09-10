/*
WAP to find cube of a number using inline function.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>

class CubeOfNumber
{
  public:
  double n, cube;
  void input();
  double findCube();

};

void CubeOfNumber::input()
{
  cout << "Enter the number : ";
  cin >> n;
}

inline double CubeOfNumber::findCube()
{
  cube = n*n*n;
  return cube;
}

void main()
{
  clrscr();
  CubeOfNumber obj;
  obj.input(); // Accepting the number
  cout << "Cube = " << obj.findCube() << endl;
  getch();
}
