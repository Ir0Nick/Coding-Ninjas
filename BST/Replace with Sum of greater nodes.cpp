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

int maxval(BinaryTreeNode<int>* root)
{
    while(root->right!=NULL)
        root= root->right;
    return root->data;
}
int sum(BinaryTreeNode<int>* root,int k,int max)
{
    if(root==NULL) return 0;
    int lsum = sum(root->left,k,max);
    int rsum = sum(root->right,k,max);
    if(root->data >=k &&root->data<=max )
        return lsum + rsum + root->data;
    return lsum + rsum;
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root,int max,BinaryTreeNode<int>*r)
{
    	if(root ==NULL)
            return;
    	replaceWithLargerNodesSum(root->left,max,r);
    	root->data = sum(r,root->data,max);
    	replaceWithLargerNodesSum(root->right,max,r);
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    
    if(root==NULL)
        return;
    int m = maxval(root);
    replaceWithLargerNodesSum(root,m,root);

}
