


#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
            break;
         }
      }
   }while(ch!=4);
   return 0;
}










/*/
#include<iostream>
using namespace std;
#define n 5
int main()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    cout<<"Queue using Array";
    cout<<"\n1.Insertion \n2.Deletion \n3.Display \n4.Exit";
    while(ch)
    {

       cout<<"\nEnter the Choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            if(rear==x)
                cout<<"Queue is Full";
            else
            {
                cout<<"\nEnter no->" <<j++ <<": ";
                cin>>queue[rear++];
            }
            break;
        case 2:
            if(front==rear)
            {
                cout<<"\nQueue is empty";
            }
            else
            {
               cout<<"\nDeleted Element is :"<<queue[front++];
                x++;
            }
            break;
        case 3:
            cout<<"\nQueue Elements are:\n";
            if(front==rear)
                cout<<"\nQueue is Empty";
            else
            {
                for(i=front; i<rear; i++)
                {
                    cout<<queue[i]<<endl;

                }
                break;
            case 4:
                exit(0);
            default:
                cout<<"\nWrong Choice: please see the options";
            }
        }
    }
    return 0;
}



*/


