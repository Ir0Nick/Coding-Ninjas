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

BinaryTreeNode<int>* constructTree(int *input, int n) {
   
    if(n<=0)
       return NULL;
     int mid = ((n+1)/2) -1;
    if(mid<0)
        return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]);
    root->left = constructTree(input,mid);
    root->right = constructTree(input+mid+1,n-mid-1);
    return root;

}
