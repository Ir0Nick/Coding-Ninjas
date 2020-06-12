#include<climits>
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/
int maxval(BinaryTreeNode<int>* root)
{
    if(root==NULL)
        return INT_MIN;
    int left = maxval(root->left);
    int right = maxval(root->right);
    return max(left,max(root->data,right));
}

int minval(BinaryTreeNode<int>* root)
{
    if(root==NULL)
        return INT_MAX;
    int left = minval(root->left);
    int right = minval(root->right);
    return min(left,min(root->data,right));
    
}

bool isBST(BinaryTreeNode<int>* root)
{
    if(root == NULL)
        return true;
    if(root->data <= maxval(root->left))
        return false;
    if(root->data > minval (root->right))
        return false;
    return isBST(root->left)&&isBST(root->right);
    
}


int largestBSTSubtree(BinaryTreeNode<int> *root) {
    
    if(root==NULL)
        	return 0;
    
	int l = largestBSTSubtree(root->left); 
    int r= largestBSTSubtree(root->right);
   
    if(isBST(root))
        return max(l,r) + 1;
    return max(l,r);
	
    
}
