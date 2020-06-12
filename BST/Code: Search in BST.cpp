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

BinaryTreeNode<int>* searchInBST(BinaryTreeNode<int> *root , int k){
	if(root==NULL) return NULL;
    if(root->data==k)return root;
    if(k<root->data)
       return searchInBST(root->left,k);
    else
        return searchInBST(root->right,k);
}
