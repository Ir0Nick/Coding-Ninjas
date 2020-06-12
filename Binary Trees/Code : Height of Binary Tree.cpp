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

int height(BinaryTreeNode<int> *root) {
   if(root==NULL)
       return 0;
    int hl = height(root->left);
    int hr = height(root->right);
	if(hl>hr)
        return 1 + hl;
    return 1+hr;

}
