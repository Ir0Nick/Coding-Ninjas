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

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    if(root == NULL)
        return;
    
    insertDuplicateNode(root->left);
    insertDuplicateNode(root->right);
   if(root->left ==NULL)
       root->left = new BinaryTreeNode<int>(root->data);
    else
    {
		BinaryTreeNode<int> * ptr = new BinaryTreeNode<int>(root->data);
        ptr->left = root->left;
        root->left = ptr;
    }

}
