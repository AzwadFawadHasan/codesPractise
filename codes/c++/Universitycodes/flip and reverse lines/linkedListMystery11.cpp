#include <iostream>
using namespace std ;

struct node {
	int data ;
	node * next ;
	
};

node * insert (node * n, int k)
{
	if (n== NULL)
	{
		node * temp = new node ;
		temp -> data = k;
		temp -> next = NULL;
		return temp;
	}
	else
	{
		n->next = insert (n->next, k);
		return n;
	}
}

void display (node * n)
{
	if (n== NULL)
	{
		return;
	}
	else
	{
		cout <<n->data << " ";
		display (n->next);
	}
}

void linkedListMystery11(node*& front1, node*& front2) {
    node* curr1 = front1;
    while (front2 != NULL) {
        if (curr1->next == NULL) {
            curr1->next = front2;
            front2 = NULL;
        } else if (front2->data < curr1->next->data) {
            node* temp2 = front2;
            front2 = front2->next;
            temp2->next = curr1->next;
            curr1->next = temp2;
        } else {
            curr1 = curr1->next;
        }
    }
}

int main (){
	node * root = NULL;
	root = insert (root, 2);
	root = insert (root, 7);	
	root = insert (root, 5);
	root = insert (root, 33);
	display(root);
	cout<< endl;
	node * root2 = NULL;
	root2 = insert (root2, 1);
		root2 = insert (root2, 10);
			root2 = insert (root2, 9);
				root2 = insert (root2, 8);
					root2 = insert (root2, 66);
						root2 = insert (root2, 55);
	
	display(root2);
	cout << endl;
	cout << endl;
	linkedListMystery11(root,root2);
	display(root);
	cout << endl;
	display(root2);
	cout << endl;
						
					
	
	
}
