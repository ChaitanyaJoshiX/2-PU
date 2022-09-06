/*
WAP to insert an element into an array at a given
position.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

class InsertElement
{
  public:
  int ele, pos, n, i, temp;
  int arr[10];
  void input();
  void insert();
  void display();
};

void InsertElement::input()
{
  cout << "Enter the number of elements : ";
  cin >> n;
  cout << "Enter the elements : ";
  for(i = 0; i < n ; i++)
  {
    cin >> temp;
    arr[i] = temp;
  }
  cout << "Enter the element to be inserted : ";
  cin >> ele;
  cout << "Enter the position : ";
  cin >> pos;

  if(pos > n) // If so program is immediately exited
  {
    cout << "Position is Out of bounds! " << endl;
    exit(0);
  }

  cout << "Before insertion : ";
  for(i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void InsertElement::insert()
{
  for(i = n-1 ; i >= pos; i--)
  {
    arr[i+1] = arr[i];
  }
  arr[pos] = ele;
  ++n;
}

void InsertElement::display()
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
  InsertElement obj;
  obj.input();
  obj.insert();
  obj.display();
  getch();
}
