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
