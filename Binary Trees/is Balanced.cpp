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


int depth(BinaryTreeNode<int>*root)
{
    if(root == NULL)
        return 0;
    if(root->right==NULL&&root->left==NULL)
    {
        return 1;
    }
    return 1+ max(depth(root->left),depth(root->right));
}


bool isBalanced(BinaryTreeNode<int> *root) {
    if(root==NULL)
        return true;
    if(isBalanced(root->left)&&isBalanced(root->right))
    { int d = depth(root->right)-depth(root->left);
   if(d==0||d==-1||d==1)
       return true;
    }return false;
}
