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
BinaryTreeNode<int>* add(BinaryTreeNode<int>*root,int k)
{
    if(root==NULL)
        return NULL;
    if(root->data == k)
        return root;
    if(add(root->left,k)!=NULL)
        return add(root->left,k);
    else
 		return add(root->right,k);
}
void print(BinaryTreeNode<int>* root,int k,BinaryTreeNode<int>* ptr=NULL)
{
    if(root==NULL||root == ptr)
        return;
    if(k==0)
    {  
        cout<<root->data<<'\n';
		return ;    
    }
    print(root->left,k-1,ptr);
    print(root->right,k-1,ptr);
}

int upnode(BinaryTreeNode<int> * root,int node,int d)
{
    if(root==NULL)
      return -1;
    
    if(root->data == node)
    {   //if(d==0)
        //cout<<root->data<<'\n';
        return 0;
    }
    int left = upnode(root->left,node,d);
    int right = upnode(root->right,node,d);
    if(left==-1&&right ==-1)
        return -1;
    if(left==-1)
    {  if(right+1 == d)
        cout<<root->data<<'\n';
     if(right+1<d)
       print(root->left,d-(right+1)-1,add(root,node));
        return right +1;
    }
    if(right ==-1)
    {
        if(left+1==d)
            cout<<root->data<<'\n';
        if(left+1<d)
        print(root->right,d-(left+1)-1,add(root,node));
        return left + 1;
    }

}        
    


void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    if(root==NULL)
        return;
    BinaryTreeNode<int>* x = add(root,node);
   upnode(root,node,k);

    print(x,k);
   
}
