#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

class Stack
{
private :
    int top;
    int arrays[5];

public:
    Stack()
    {
        top= -1;
        for(int i=0; i<5; i++)
        {
            arrays[i]=0;
        }
    }

    bool isempty()
    {
        if(top== -1)
            return true;
        else
            return false;
    }

    bool isfull ()
    {
        if(top== 4 )
            return true;
        else
            return false;
    }

    void push(int value) // add value into the stack  when it is empty
    {
        if(isfull())   // check is the stack is full
        {
            cout<<"Stack is full"<<endl;
        }
        else   // if not full add value to stack
        {
            top++; // counter for top value
            arrays[top]=value; // assign top value to given value
        }
    }


    int pop()  // remove value from stack
    {
        if(isempty()) // check if empty
        {
            cout<<"Stack is empty"<<endl;

        }
        else  // if not em
        {
            int popvalue =arrays[top]; // take the value of array top and store temp in pop value
            arrays[top]=0; // set top to 0
            top--; // move one place down of top
            return popvalue; // place the pop value in place

        }
    }


    int num_of_items() // counting how many values in the stack
    {
       return (top +1); // if number of items is 2 top is 1 so return top plus 1 to get count in stack
    }

    int find_item(int position) // peek value
    {
        if(isempty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            return arrays[position]; // getting the position of the value to display
        }
    }

    void printstack()
    {
        cout<<"All the values in the stack are: "<<endl;
        for(int i =4; i>=0; i--) // using loop to display from top to down so will look like stack
        {
            cout<<arrays[i]<<endl;
        }
    }

     void get_max_min()
    {
       int min = int T_MAX,max = INT_MIN;

       if(!isfull())
       {
          cout<<"Stack is empty"<<endl;
       }
       else
       {
           for( int i:arrays)
           {
               if(i<min)
               {
                   min = i;
               }
               if (i<max)
               {
                   min = i;
               }
           }
       }

       cout <<"The min value in the stack is: "<<min<<endl;
       cout <<"The max value in the stack is: "<<max<<endl;
    }
};

int main()
{

Stack s1;
   int menu, positions, values;

   do{

     cout<<"Select operation :"<<endl;

     cout<<"\n1.Add items"<<endl;
     cout<<"2.Delete item"<<endl;
     cout<<"3.Number of item"<<endl;
     cout<<"4.Max and Min"<<endl;
     cout<<"5.Find item"<<endl;
     cout<<"6.Print stack"<<endl;
     cout<<"7.Exit"<<endl;
     cout<<"8.Clear screen"<<endl;

     cout <<"\nEnter stack operation: ";

     cin>>menu;
     switch(menu)
     {
     case 1:
        cout<<"Enter value to add in stack :";
        cin>>values;
        s1.push(values);
        break;

     case 2:
        cout<<"Deleted item from stack : "<<s1.pop()<<endl;
        break;

     case 3 :
        cout<<"Number of items in the stack: "<<s1.num_of_items()<<endl;
        break;

     case 4:
        s1.get_max_min();
         break;

     case 5 :
        cout<<"Find item in stack(in position): ";
        cin>>positions;
        cout<<"Value at position" <<positions<<" is "<<s1.find_item(positions)<<endl;
        break;

     case 6 :
         cout<<"Print stack" <<endl;
        s1.printstack();
        break;

     case 7:
         cout<<"Exit"<<endl;
         break;

     case 8:
         system("cls");
         break;

     default:
         cout<<"Invalid options";

}

   }while(menu!=7);
}



