#include<climits>
bool search(int val,BinaryTreeNode<int>* root)
{	if(root==NULL)
     return false;
    
   if(root->data == val)
       return true;
   
    return search(val,root->left)||search(val,root->right);
    
    
}


void printNodesSumToS(BinaryTreeNode<int> *cn, int s,BinaryTreeNode<int>* root)
{
   if(cn==NULL)
        return;
    
        printNodesSumToS(cn->left,s,root);
        if(cn->data!=s-cn->data&&search(s - (cn->data),root))
        {
            
            cout<<cn->data<<' '<<s-cn->data<<'\n';cn->data = INT_MIN;
        }
        printNodesSumToS(cn->right,s,root);
} 

void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
  printNodesSumToS(root,s,root);

}
