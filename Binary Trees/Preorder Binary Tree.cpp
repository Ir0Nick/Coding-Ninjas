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

void preOrder(BinaryTreeNode<int> *root) {
    if(root)
    {
        	cout<<root->data<<' ';
            preOrder(root->left);
            preOrder(root->right);
    }
}
