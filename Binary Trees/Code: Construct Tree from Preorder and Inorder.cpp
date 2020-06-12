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

 //pre :	 root left right
// ino :	 left root right


BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
  if(preLength>0&&inLength>0)
  {  
	 BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[0]);
	 int leftbegpre,leftendpre,leftbegino,leftendino;
     
     int i=0;
     while(inorder[i]!=root->data)
        i++;
     leftendino = i-1;
     leftbegpre= 1;
     leftendpre = i;
     leftbegino =0;
     root->left = buildTree(preorder+1,i,inorder,i);
     int rbegpre,rendpre,rbegino,rendino;
     rbegpre = rbegino = i+1;
     rendino = rendpre = preLength-1;
     root->right = buildTree(preorder+rbegpre , rendino-rbegino+1,inorder+rbegino, rendino-rbegino+1 );
     return root;
  }
  else return NULL;
}
