#include<climits>
int maxval(BinaryTreeNode<int> *root)
{
    if(root==NULL)
        return INT_MIN;
    if(root->right)
    {
        int max;
        while(root->right)
        {max=root->right->data;
         root= root->right;}
        return max;
    }
     return root->data;
}
int minval(BinaryTreeNode<int> *root)
{
    if(root==NULL)
        return INT_MAX;
    if(root->left)
    { int min;
      while(root->left)
      {
          min = root->left->data;
		  root = root->left;
      }
     return min;
    }return root->data;
}

bool isBST(BinaryTreeNode<int> *root){
   if(root==NULL)
       return true;
   if(root->left&&root->data<maxval(root->left))
       return false;
    if(root->right&&root->data > minval(root->right))
        return false;
    if(!isBST(root->left)||!isBST(root->right))
        return false;
    return true;
       
}
