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

void nodesWithoutSibling(BinaryTreeNode<int> *root) {
    if(root==NULL)
        return;
    if(!root->left)
        if(root->right)
            cout<<root->right->data<<'\n';
    if(!root->right)
        if(root->left)
            cout<<root->left->data<<'\n';
    nodesWithoutSibling(root->right);
    nodesWithoutSibling(root->left);

}
