/*
WAP to find the frequency presence of an element in an
array.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>

class ElementFrequency
{
  public:
  int ele, freq, n, i, temp;
  int arr[10];
  void input();
  void find();
  void display();
};

void ElementFrequency::input()
{
  cout << "Enter the number of elements : ";
  cin >> n;
  cout << "Enter the elements : ";
  for(i = 0; i < n ; i++)
  {
    cin >> temp;
    arr[i] = temp;
  }
  cout << "Enter the element to find frequncy of : ";
  cin >> ele;
}

void ElementFrequency::find()
{
  freq = 0;
  for(i = 0; i < n; i++)
  {
    if(arr[i] == ele)
    {
      freq++;
    }
  }
}

void ElementFrequency::display()
{
  cout << "Frequency of " << ele << " is : " << freq << endl;
}

void main()
{
  clrscr();
  ElementFrequency obj;
  obj.input();
  obj.find();
  obj.display();
  getch();
}
