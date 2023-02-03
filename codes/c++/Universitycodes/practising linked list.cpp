#include <iostream >
using namespace std ;

class node
{
	public:
		
	       int data;
			node * next ;
		
	
};
node* head=NULL;

void print (node * head)
{
	while (head!=NULL)
	{
		cout << head->data<<"-> ";
		head= head ->next ;
		
		
	}
	cout <<"Null";
}

void insertingNodetofrontofhead (int data)
{
	node *newfirst = new node();
	newfirst->data = data;
	newfirst->next = head;
	head  = newfirst;
	//head =newfirst;
	
}

void insertingNodeatendofanode(int data)
{
	node * newnode = new node();
	newnode->data = data ;
	node* temp =new node();
	temp = head;
	newnode->next =NULL;
	if (head== NULL)
	{
		head = newnode;
	}
	while (temp->next!=NULL)
	{
		temp=temp->next ;
	}
	//temp=temp->next;
	temp->next =newnode;
	
	
}

void search (int element )
{
	int count = 0;
	node * data = head;
	while(data!=NULL)
	{
		if (data ->data==element )
		{
			count ++;
		}
		data=data->next;
		
	}
	cout << "found "<<count <<"Times \n"; 
	
}

void enternodeafteranynode(int after,int x)
{
	node * temp = head ;
	int count=0;
	node *prev=NULL;
	node *afterprev=NULL;
	while(temp!=NULL)
	{
		count++;
		if (temp->data == after)
		{
			prev=temp;
			afterprev=prev ->next;
		}
		temp=temp->next;	
	}
	node *newnode = new node();
	newnode->data = x;
	newnode->next = afterprev;
	prev->next =newnode;
	


}

void deletefrombegining()
{
	cout <<"\n Deleting from begining \n";
	node* temp = head;
	if (head == NULL)
	{cout << "linked list is empty ";
	}
	head = head -> next ;
	delete temp;
}

void deletefromend()
{
	node * prev=head;
	cout <<"\n Deleting from end \n";
	node* temp = head;
	while (temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next ;
		
	}
	delete temp;
	prev->next=NULL;
}



void deletefromanywhere(int pos)
{
	node * cur=head ;
	node * prev=head;
	if (pos==0)
	{
		head=head->next ;
	}
	int i=0;
	while (i<pos-1)
	{
	
		
		
		cur=cur->next;
		i++;
	}
		
			cur->next =cur->next->next;
		//delete cur;
		//cur=NULL;
		}	
		
	
		





int main ()
{
int x;	
	node *first = new node();
	node *second = new node();
	node * three = new node ();

	head = first;
	
	first -> data = 3;
	first -> next = second ;
	second -> data = 4;
	second  -> next = three ;
	three -> data = 5;
	three -> next = NULL ;
	print (head);
/*	
	cout <<"Enter the data of the new node that you want to create and push to the front of the linked list \n ";
	
	cin>>x;
insertingNodetofrontofhead (x);
		print (head);
		cout << endl;
		cout <<"ENter new data to insert at the end \n ";
		cin>>x;
insertingNodeatendofanode(x);
print (head);

cout <<"ENter the element you want to search in the list \n";
cin>>x;
search (x);*/

cout <<"ENter the element you want enter after the desried node \n"
;cout <<"ENter the desired node\n";
int after =0;
cin>> after ;
cout << "enter the data for the new node \n";
cin>>x;


enternodeafteranynode(after,x);
print (head);

//deletefrombegining();print (head);

//deletefromend();print (head);

cout <<"enter position you want to delete \n";
 


cin>>x;
deletefromanywhere(x);
print (head);

	
}


















/*

class node
{
	public :
			int data;
			int key;
			node * next ;
			
			node ()
			{
				data = 0;
				key = 0;
				data = NULL;
				
			}
			node (int k , int d )
			{
				data =d;
				key =k ;
				
			}
};


class singlylinkedlist
{
	public:
			node* head;
			
			singlylinkedlist()
			{
				head = NULL;
			}
			
			singlylinkedlist(node *n)
			{
				head = n;
			}
			
			//function number 1 node exists
			node* node_exists(int k)
			{
				node* temp=NULL;
				node * ptr=head;
				
				while (ptr!= NULL)
				{
					if (ptr->key==k)
					{
						temp =ptr;
					}
						ptr = ptr->next ;
				}
				return temp;
			
			}
			
			void append(node * n )
			{
				
			}
	

	
	
};






int main ()
{
	
}

*/
