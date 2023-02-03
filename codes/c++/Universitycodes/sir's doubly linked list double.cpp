#include <stdio.h>
#include <stdlib.h>
#include <iostream>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}*root;
typedef struct Node node;

void insertlast(int a)
{
    node *temp,*p;
   temp=(node *)malloc(sizeof(node));
    temp->data=a;
    temp->next=NULL;
    temp->prev=NULL;

    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        p=root;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->prev=p;
    }
}

void insertfirst(int a)
{
    node *temp,*p;
    temp=(node *)malloc(sizeof(node));
    temp->data=a;
    temp->next=NULL;
    temp->prev=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->next=root;
        root->prev=temp;
        root=temp;
    }
}

void update(int a, int b)
{
    node *p;
    p=root;
    while(p->data!=a)
    {
        p=p->next;
    }
    p->data=b;

}

int count()
{
    node *p;
    p=root;
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    printf("\n there are %d elements in the list\n",count);
    return count;
}

void deletefirst()
{
    root=root->next;
    root->prev=NULL;
}

void deletelast()
{
    node *p;
    p=root;
    while(p!=NULL)
    {
        p=p->next;
    }
    p->prev=NULL;
}

void insertmiddle(int a)
{
    int i=0,c=count()/2;
    node *temp,*p;
    p=root;
    temp=(node *)malloc(sizeof(node));
    temp->data=a;
    temp->next=NULL;
    temp->prev=NULL;
    for(i=1;i<c;i++)
    {
        p=p->next;
    }
    temp->next=p->next;
    temp->next->prev=temp;
    p->next=temp;
    temp->prev=p;

}

void print()
{
    printf("The doubly linked list is\n");
    node *p;

    p=root;
    if(p==root)
    {
        printf("NULL",p->data);
    }

    while(p!=NULL)
        {
            printf("<=%d=>",p->data);
            p=p->next;
        }
        printf("NULL\n");

}

int main()
{
    root=NULL;

    printf("Hello World\n");
    insertlast(10);
    insertlast(20);
    insertlast(30);
    insertlast(40);
    insertlast(50);
    print();
    insertfirst(100);
    insertfirst(90);
    insertfirst(80);
    insertfirst(70);
    print();
    update(100,200);
    print();
    insertmiddle(500);
    print();

    return 0;
}
