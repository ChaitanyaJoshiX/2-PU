/*
WAP to search for a given element in an array using
binary search method.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>
#include <math.h>

class BinarySearch
{
  public:
  int i, n, ele, loc;
  int arr[10];
  int low, high, flag;
  double mid;
  void input();
  void search();
  void display();
};

void BinarySearch::input()
{
  cout << "Enter the number of elements : ";
  cin >> n;

  cout << "Enter the element to be searched : ";
  cin >> ele;

  cout << "Enter the elements : ";
  for(i = 0; i < n ; i++)
  {
    cin >> arr[i];
  }

}

void BinarySearch::search()
{
  low = 0; // First element of the array
  high = n-1; // Last element of the array

  while(low < high) // Till entire array is transversed
  {
    mid = floor((low+high)/2);
    if(ele == arr[mid]) // Element found at mid
    {
      flag = 1;
      loc = mid;
      break;
    }
    else if(ele < arr[mid]) // Element is lesser than mid
    {
      high = mid-1;
    }
    else // Element is greater than mid
    {
      low = mid+1;
    }
  }
}

void BinarySearch::display()
{
  if(flag == 1)
  {
    cout << "Element " << ele << " is found at postion " << loc << endl;
  }
  else
  {
    cout << " Element is not found!" << endl;
  }
}

void main()
{
  clrscr();
  BinarySearch obj;
  obj.input();
  obj.search();
  obj.display();
  getch();
}
