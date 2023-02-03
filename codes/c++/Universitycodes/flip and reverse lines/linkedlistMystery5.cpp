#include <iostream>
using namespace std;

struct node {
	int data;
	node * next;
};

node* insert (node * n, int d)
{
	if (n==NULL)
	{
		node* newnode = new node ;
		newnode -> data = d; 
		newnode -> next = NULL;
		return newnode;
	}
	else
	{
		n->next = insert (n->next, d);
		return n;
	}
}

void display (node * n)
{
	if (n== NULL)
	return;
	cout <<n->data << " ";
	display (n->next);
	
}
void linkedListMystery(node*& front1, node*& front2) {
    while (front1->data < front2->data) {
        node* trash = front1;
        front1 = front1->next;
        delete trash;
    }

    node* curr1 = front1;
    node* curr2 = front2;
    while (curr1->next != NULL && curr2->next != NULL) {
        if (curr1->next->data < curr2->next->data) {
            node* temp = curr1->next;
            curr1->next = curr2->next;
            curr2->next = temp;
        } else {
            curr2 = curr2->next;
        }
    }
}

int main ()
{
	node * root = NULL;
	root = insert(root, 2);
	root = insert (root,5);
	root = insert (root,3);
	root = insert(root, 8);
	root = insert (root,15);
	root = insert (root,9);
	display (root);
	cout << endl;
	node * root2 = NULL;
	root2 = insert(root2, 4);
	root2 = insert (root2,6);
	root2 = insert (root2,12);
	root2 = insert(root2, 7);
	root2 = insert (root2,16);
	root2 = insert (root2,99);
	display (root2);
	cout << endl;
	cout << "After" << endl;
linkedListMystery(root,root2);
display (root)
;cout << endl;
display(root2);	
	/*
	front1 ->  2 ->  5 ->  3 ->  8 -> 15 ->  9 /
front2 ->  4 ->  6 -> 12 ->  7 -> 16 -> 99 /
	*/
}
