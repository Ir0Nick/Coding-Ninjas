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
//post : left right root
//ino  : left root right

BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength) {
    if(postLength>0&&inLength>0)
    {
    		BinaryTreeNode<int>* root = new BinaryTreeNode<int>(postorder[postLength -1]);
            int i=0;
            while(inorder[i]!=root->data)
            i++;
         
            root->left = getTreeFromPostorderAndInorder( postorder, i , inorder , i);
    		root->right  = getTreeFromPostorderAndInorder(postorder + i , inLength - i -1 , inorder + i +1, inLength - i -1);
            return root;
    
    }
    else return NULL;

}
