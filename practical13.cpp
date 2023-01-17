/*
WAP to  push items into the stack.

@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#define size 5

class StackPush
{
  public:
  int top;
  int stak[10];
  StackPush()
  {
      top = -1;
  }
  void push()
  {
    	int ele;
    	if(top == size-1)
    	{
    		cout << "Stack Overflow!" << endl;
    	}
    	else
    	{
    		cout << "Enter element to be inserted to the stack : ";
    		cin >> ele;
    		top++;
    		stak[top] = ele;
      }
  }
  void display()
  {
    int i;
  	if(top==-1)
  	{
  		cout << "Stack Underflow!" << endl;
  	}
  	else
  	{
  		cout << "Elements in the stack are : " << endl;
  		for(i = top; i>=0; i--)
          {
              cout << stak[i] << " ";
          }
          cout << endl;
  	}
  }
};

void main()
{
    clrscr();
    StackPush obj;
    int choice;
    while(1)
        {
            cout << "Operations performed:" << endl;
            cout << "1.Push the element\n2.Display all elements\n3.Quit" << endl;
            cout << "====================================================================" << endl;
            cout << "\nEnter the choice :";
            cin >> choice;
            switch(choice)
            {
                case 1: obj.push();
                cout << "====================================================================" << endl;
                break;
                case 2: obj.display();
                cout << "====================================================================" << endl;
                break;
                case 3: cout << "Thank you for running!" << endl;
                exit(0);
                default: cout << "Invalid choice!" << endl;
            }
        }
    getch();
}
