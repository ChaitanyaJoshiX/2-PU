/*
WAP to sort the element of an array in ascending order using
insertion sort.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>
#include<stdlib.h>

class InsertSort
{
  public:
  int a[10], n, i;
  void input();
  void sort();
  void display();
};

void InsertSort::input()
{
  cout << "Enter the number of elements : ";
  cin >> n;

  cout << "Enter the elements : ";
  for(i = 0; i < n ; i++)
  {
    cin >> a[i];
  }

  cout << "Before sorting : ";
  for(i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

void InsertSort::sort()
{
  int j, temp;
  for(i=1; i<n; i++)
  {
    j = i;
    while(j >= 1)
    {
      if(a[j] < a[j-1])
      {
        temp = a[j];
        a[j] = a[j-1];
        a[j-1] = temp;
      }
      j = j-1;
    }
  }
}

void InsertSort::display()
{
  cout << "After sorting : ";
  for(i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

void main()
{
  clrscr();
  InsertSort obj;
  obj.input();
  obj.sort();
  obj.display();
  getch();
}
