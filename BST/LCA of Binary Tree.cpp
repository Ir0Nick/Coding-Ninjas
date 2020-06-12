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

int lcaBinaryTree(BinaryTreeNode <int>* root , int val1, int val2){
 	 if(root==NULL)
    	  return -1;
     if(root->data==val1||root->data==val2)
         return root->data;
     int left = lcaBinaryTree(root->left,val1,val2);
 	 int right = lcaBinaryTree(root->right,val1,val2);

    if(left==-1)
        return right;
    if(right==-1)
        return left;
    return root->data;

}
