#include <iostream>
using namespace std;

struct node {
	int data ;
	node * left;node * right;
	node()
	{
		data= 0;
		left = right = NULL;
	}
	
};

node * insert (node * n, int data)
{
	if (n == NULL)
	{
		node * temp = new node;
		temp->data = data ;
		
		return temp;	
	}
	
	else if (n->data >data)
	{
		n->left=insert (n->left, data);
		return n ;
	}
	else
	{
		n->right = insert (n->right, data);
		return n;
	}

}
//int count ;
static int c;
void display(node *n)
{
	if (n==NULL)
	{
		return;
	}
		c++;
		// count =0;
		display (n->left);
		cout <<n->data<<" \n";
	//	cout <<"\n count\t"<< count;
		display (n->right);
		//?/count++;
		

}

void noofnodes(node *n)
{ 

cout <<"\nthe total number of nodes in the bst  is "<< c<< endl;


}
static int mx=-9999;
static int mn=9999;

void maxmin(node * n)
{
	if (n==NULL)
	{return ;
	
	}
	else
	{
		if (n->data>mx)
		{
			mx = n->data;
		}
		if(n->data < mn)
		{
			mn = n->data;
		}
		maxmin(n->left);
		maxmin(n->right);
		
	}
}
/*
int findlevel (node * n , int value, int level)
{
	if (n== NULL)
	{ 
		return -1;
	}
	if (n->data == value)
	{
		return level;
	}
	else if (n->data > value)
	{
		int l=findlevel(n->left,value,level+1);
		return l;
	}
	else
	{
		int l = findlevel (n->right, value, level+1);
		return l;
	}
}
*/

node* LCA(node * root, int n1,int n2)
{
    // Your code here
    if (root == NULL)
       return root;
    if (root->data == n1 || root->data ==n2)
       return root;
 
    node* left = LCA(root->left, n1, n2);
    node* right = LCA(root->right, n1, n2);
 
    if (left != NULL && right != NULL)
         return root;
    if (left == NULL && right == NULL)
           return NULL;
    if (left != NULL)
        return LCA(root->left, n1, n2);
 
    return LCA(root->right, n1, n2);
}

int findlevel (node * root , int k , int level)
{
	if (root == NULL)return -1;
	if (root->data == k)return level;
	int left = findlevel(root->left , k , level +1);
	if (left==-1)
		return findlevel (root->right, k , level +1);
	return left;	
	
}

int distance (node * root, int a , int b)
{
	 node * lca= LCA (root, a, b);
	 int d1= findlevel(lca , a ,0);
	 int d2 = findlevel (lca, b, 0);
	 return d1+d2;
	 
}


/*
node * lca (node *n, int a, int b)
{
	if (n== NULL)
	{
		return n;
		
	}
	if (n->data = a || n->data == b)
	{
		return n ;
	}
	node* l = lca(n->left, a, b);
	node* r = lca (n->right, a, b);
	
	if (l != NULL && r!=NULL)
	{
		return n;
	}
	if (l==NULL && r==NULL){
			return NULL ;}
	if (left != NULL)
	{
		return lca(n->left, a, b);
		
			}	
	else
	{
		return lca(n->right, a, b);
				}			
		
}
*/

void left (node* n)
{
	if (n== NULL)
	{return;
	
	}
	cout <<n->data <<" ";
	left (n->left);
}
void right (node* n)
{
	if (n== NULL)
	{return;
	
	}
	cout <<n->data <<" ";
	right (n->right);
}

	static int total=0;
	int a[100];
	int i=-1;
void sum(node * n)
{
	if (n==NULL)
	{
		return;
		
	}
	i++;
	a[i]=n->data;
	
	
	total=total+ n->data;
	sum(n->left);
	sum (n->right);

}
int b[100];
int j =-1;
void kthSandM(node * n)
{
	if (n== NULL)
	{
		return;
	}
	
	kthSandM(n->left);
	j++;
	b[j] = n->data;
	kthSandM(n->right);
	
	
	
}

node* minrightsubtreevalue(node* n)
{
	node * curr = n;
	while (curr && curr->left != NULL)
	{
		curr = curr ->left;
	}
	return curr;
}

 node* deleteanode(node * n, int data)
{
	if (n== NULL)
	{
		return n;
		
	}
	else if (n->data>data)
	{
		n->left = deleteanode(n->left, data);
		
	}
	else if (n->data< data)
	{
		n->right = deleteanode(n->right, data);
		
	}
	else
	{
		if (n->left == NULL && n->right== NULL)
		{
			delete n;
			n= NULL;
			return n;
			
		}
		else if (n->left == NULL)
		{
			node * temp =  n;
			n= n->right;
			delete temp;
			return n;
		}
		else if (n->right == NULL)
		{
			node * temp = n;
			n=n->right;
			delete temp;
			return n;
		}
		else
		{
			node * temp = minrightsubtreevalue(n->right);
			n->data= temp->data
			;n->right = deleteanode(n->right , temp->data);
		}
	}
}

node * deleteoutsiderange(node * n, int a, int b)
{
	if (n==NULL)
	{
		return n;
	}
	n->left = deleteoutsiderange(n->left, a,b);
	n->right= deleteoutsiderange(n->right, a,b);
	node * curr = n;
	if (n->data< a)
	{
		n= n->right;
		delete curr;
		
	}
	else if (n->data > b)
	{
		n= n->left;
		delete n;
	}
	return n;
}

bool exist (node *n, int val)
{
	if (n==NULL)
	{
	
		
		return false;
	}
	
	
	if (n->data== val)
	{
		return true;
	}
	if (n->data > val)
		exist(n->left,val);
	else
		exist(n->right,val);
}

int main (){
	
	node* root = NULL;

	root = insert(root, 10);
	root =insert(root, 5);
	root =	insert(root, 13);
	root =	insert(root, 3);
	root =	insert(root, 7);
	root =	insert(root, 14);
	display(root);	
	noofnodes(root);
	maxmin(root);
	cout << "Max in the bst is "<< mx << " min in the bst is  "<< mn << endl;
	
	node * lowca = LCA(root,3,7);
	cout << "Lca is " << lowca->data;
	cout <<" distamce between 5 and 13 is " <<distance(root, 5 , 13)<<endl;
	left(root);
	cout <<"\n";
	right(root);
	cout << endl;
	sum(root);
	cout <<" sum of all values "<< total ;
	
	cout << endl;
	int addingarray=0;
	for (int k=0; k<=i; k++)
	{
		addingarray= addingarray+ a[k];
		cout << a[k]<<" ";
		
	}
	cout <<" adding using a loop "<< addingarray;
	cout << "\nFinding the kth smallest and largest element in the bst "<< endl;
	kthSandM(root);
	cout <<" the kth smallest "<< b[0]<<" the kth largest is "<< b[j]<< endl;
	cout << endl;
	//deleteanode(root,10);
	cout <<" deleting complete \n";
	//display(root);
	//deleteoutsiderange(root,7,13 );
	//cout <<"\n";
	//display(root);
	cout <<exist(root, 95);
	
}
