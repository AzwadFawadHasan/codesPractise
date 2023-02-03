#include <iostream>
using namespace std ;

class Node
{
	
	public:
		int key;
		int data;
		Node* next ;
		
		
		Node ()//default constructor 
		{
			key = 0;
			data = 0;
			next = NULL;
			 
			}
			
		Node(int k, int d )
		{
			key =k ;
			data = d; 
			
				}		
};

class SinglyLinkedList
{
 public:
		Node *head;//more like first node 
		
		SinglyLinkedList ()//default constructor 
		{
			head =NULL;
		}
		SinglyLinkedList (Node *n)//another constructor that takes the node as an arguement 
		{                        //passing pointer means passign by address 
		
			head =n;
		}
		
		//first method / function 
		//this method will return a pointer
		
		Node* nodeExists(int k)
		{
			Node* temp = NULL;
			Node * ptr = head ;
			 
			while (ptr!=NULL)// if ptr is equal to null this means there exists no nodes at all 
			{ 
		    	if (ptr->key==k)
		    	{
		    		temp = ptr ;
		    		
				}
		    	ptr = ptr -> next ;//storing the address of the next node in ptr 
		    	
		    	
			
			}
			return temp ;
		}
		
		// second method 
		// append a node // appending always happens at the end
		
		void appendNode(Node *n )
		{
			//first check whether key value differs form others
			if (nodeExists(n -> key ) != NULL)
			
			{
					cout <<"Node already exitsts with key value "<<	n->key <<"Append another node with a different key value" << endl;
					
			}
			else
			{
				if (head==NULL)// this means there is no node in the singly linked list 
				{
					head = n;
					cout <<"Node is  appened"<<endl;
				}
				else 
				{
					Node* ptr = head ; 
					while (ptr->next !=NULL)
					{
						ptr = ptr->next;
					}
					ptr-> next = n; 
					cout << "Node has been appened \n";
				}
			}
		}
		
		
		//prepending a node 
		// attaching a node to the start/front of a node
		// in the linked list 
		void prependNode (Node * n)
		{
			if (nodeExists(n-> key)!=NULL)
			{
				cout << "Node already exists with key value : " << n->key << "APpend another node " << endl;
				
					
			}
			else
			{
				n->next = head ;
				head =n;
				cout <<"NOde appended "<< endl;
			}
		}
		
		// insterting a node inbetweeen somewhere 
		void insertNodeAfter (int k, Node *n)
		{
			Node * ptr = nodeExists(k);
			 if (ptr==NULL)
			 {
			 	cout <<"No node exists with keyvalue  "<< k << endl;
			 	
			 }
			 else
			 {
			 	n->next = ptr->next;
			 	ptr->next = n;
			 	// becare ful of the steps here 
			 	cout <<"Node has been inserted "<<endl;
			 }
		}
		
		void deleteNodeByKey(int k )
		{
			 if (head == NULL)
			 {
			 	cout <<"Linked list is already empty " << endl;
			 	
			 }
			 else if (head !=NULL)
			 {
			 	if (head->key==k )// applies to the first node only 
			 	{
			 		head = head ->next ;
			 		cout <<"Node unlinked with keys value : " << k << endl;
				 }
				 else
				 {
				 	Node * temp= NULL;
				 	Node * prevptr= head ;
				 	Node * currentptr = head->next ;
				 	
				 	while (currentptr -> key ==k)
				 	{
				 		
				 			if (currentptr->key = k)
				 			{
				 				temp = currentptr ;
				 				currentptr= NULL;
							 }
							 
							 else 
							 {
							 	prevptr = prevptr -> next ; 
							 	currentptr = currentptr->next ;
							 }
					 }
					 if (temp!=NULL)
						{
							prevptr->next = temp-> next ;
							cout <<"Node unlinked with keys vlue"<< k << endl;
						}
						else
						{
							cout <<"Node doesnt exists with key value " << k << endl;
						}
				 	
				 }
				 
			 }
		}
		
		
		//updatiog a node
		void updateNodeByKey(int k , int d)
		{
			Node * ptr =nodeExists(k);
			if (ptr!=NULL)
			{
				ptr -> data = d;
				cout << "Node updated successfully "<< endl;
			}
			else
			{
				cout <<"Node doesn't exists with key gvalue <"<< k<< endl;
			}
		}
		
		
		// printing the whole linked list 
		void printlist  ()
		{
			
			if (head == NULL)
			{
				cout << "No nodes in the linked list "<< endl;
				
			}
			else
			{
				cout <<"Singly linked list values are ";
				Node * temp = head ;
				while (temp!= NULL)
				{
					cout <<"("<<temp->key <<", "<< temp->data << ") --->";
					temp = temp -> next; 
				}
			}
		}
		
		
};

int main ()
{
	int option , key1, k1, data1;
	SinglyLinkedList s ;
	
	
	do 
	{
		cout <<"Enter the operation that you want to perform \n 1. append \n 2. prepend node \n 3. insert node \n 4 delete node \n 5. update node \n 6. print node \n 7  clear screen \n  " ;
		cin >> option ; 
		Node* n1= new Node();
		
		
		
		switch (option)
		{
			
			case 0:
					break;
			
			case 1 : 
					cout <<"Append opteration \n enter key and data of thee node that is to be appended  ";
					cin >> key1;cin >> data1;
					n1->key= key1;
					n1-> data = data1 ;
					s.appendNode(n1);
					break;
			
			case 2:
				   cout <<"	Append opteration \n enter key and data of thee node that is to be appended  ";		
				   cin >> key1;
				   cin>> data1;
				   n1->key = key1;
				   n1->data= data1;
				   s.prependNode(n1);
				   break;	
			case 3:
					cout << "Insert Node after operation \n Enter key of existing node after which you want to insert this new node \n";
					cin>>k1;
					cout <<"Eter key and data fpr the new node "<< endl;
					cin>>key1;
					cin>> data1;
					n1->key= key1;
					n1->data = data1;
					s.insertNodeAfter(k1,n1);
					break;
			
			case 4:
					cout <<"dElete node enter the key of the nede to be deleted "<<endl;
					cin>>k1;
					s.deleteNodeByKey(k1);
					break;
			case 5:
					cout <<"Update node by key ] enter key and new dat ato be updated "<< endl;
					cin>>key1 ;
					cin>>data1;
					s.updateNodeByKey(key1,data1);
					break;
			
			case 6:
					s.printlist();
					break;
			case 7:
			       system("cls");
				   break;
			default:
					cout <<"Enter proper ooption"<<endl;					
						   	 
				
		}
	
	}while(option!=0);
	
}

