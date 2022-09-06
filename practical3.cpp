/*
WAP to delete an element from an array from a
given position.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class DeleteElement
{
  public:
  int ele, pos, n, i;
  int arr[10];
  void input();
  void deletee();
  void display();
};

void DeleteElement::input()
{
  cout << "Enter the number of elements : ";
  cin >> n;

  cout << "Enter the position of element to be removed : ";
  cin >> pos;

  if(pos > n) // If so program is immediately exited
  {
    cout << "Position is Out of bounds! " << endl;
    exit(0);
  }

  cout << "Enter the elements : ";
  for(i = 0; i < n ; i++)
  {
    cin >> arr[i];
  }


  cout << "Before deletion : ";
  for(i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void DeleteElement::deletee()
{
  for(i = pos; i < n; i++)
  {
    arr[i] = arr[i+1];
  }
  n--; // Decrementing array size by 1
}

void DeleteElement::display()
{
  cout << "After insertion : ";
  for(i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void main()
{
  clrscr();
  DeleteElement obj;
  obj.input();
  obj.deletee();
  obj.display();
  getch();
}
