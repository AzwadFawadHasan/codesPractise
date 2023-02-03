/* C++ program to find distance between n1 and n2 using 
   one traversal */
#include <iostream>
using namespace std;
 
struct node {
	int key;
	node * left;node * right;
	node()
	{
		key= 0;
		left = right = NULL;
	}
	
};

node * insert (node * n, int key)
{
	if (n == NULL)
	{
		node * temp = new node;
		temp->key = key ;
		
		return temp;	
	}
	
	else if (n->key >key)
	{
		n->left=insert (n->left, key);
		return n ;
	}
	else
	{
		n->right = insert (n->right, key);
		return n;
	}

}


int findLevel(node *root, int k, int level)
{
    // Base Case
    if (root == NULL)
        return -1;
 
    // If key is present at root, or in left subtree
    // or right subtree, return true;
    if (root->key == k)
        return level;
 
    int l = findLevel(root->left, k, level+1);
    return (l != -1)? l : findLevel(root->right, k, level+1);
}

node *findDistUtil(node* root, int n1, int n2, int &d1, 
                            int &d2, int &dist, int lvl)
{
    // Base case
    if (root == NULL) return NULL;
 
  
    if (root->key == n1)
    {
         d1 = lvl;
         return root;
    }
    if (root->key == n2)
    {
         d2 = lvl;
         return root;
    }
 
 
    node *left_lca  = findDistUtil(root->left, n1, n2, 
                                   d1, d2, dist, lvl+1);
    node *right_lca = findDistUtil(root->right, n1, n2,
                                   d1, d2, dist, lvl+1);
 
    if (left_lca && right_lca)
    {
        dist = d1 + d2 - 2*lvl;
        return root;
    }
 
    // Otherwise check if left subtree or right subtree 
    // is LCA
    return (left_lca != NULL)? left_lca: right_lca;
}
 
// The main function that returns distance between n1
// and n2. This function returns -1 if either n1 or n2
// is not present in Binary Tree.
int findDistance(node *root, int n1, int n2)
{
   
    int d1 = -1, d2 = -1, dist;
    node *lca = findDistUtil(root, n1, n2, d1, d2,
                                          dist, 1);
 
    if (d1 != -1 && d2 != -1)
        return dist;

    if (d1 != -1)
    {
        dist = findLevel(lca, n2, 0);
        return dist;
    }

    if (d2 != -1)
    {
        dist = findLevel(lca, n1, 0);
        return dist;
    }
 
    return -1;
}
 

int main()
{
    struct node *root = NULL;
    root = insert(root, 54);
    root = insert(root, 30);
    root = insert(root, 690);
    root = insert(root, 4);
    root = insert(root, 780);
    root = insert(root, 960);
    root = insert(root, 808);
    root = insert(root, 901);


    cout << endl;
    
   cout << "Distance(54, 901) = " << findDistance(root, 54, 901);
   

    cout<<endl;
    return 0;
}
