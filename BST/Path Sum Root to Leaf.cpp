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

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k,vector<int>*v=NULL) {
   if(root ==NULL)
        return;
    if(v==NULL)
        v= new vector<int>;
    if(k==root->data&&root->left==NULL&&root->right==NULL)
    {	
       
        for(int i=0;i<v->size();i++)
            cout<<v->at(i)<<' ';
        	cout<<root->data;
        cout<<'\n';
     return;
    }
    if(root->data < k)
    {  v->push_back(root->data);
        rootToLeafPathsSumToK(root->left,k-root->data,v);
     	rootToLeafPathsSumToK(root->right,k-root->data,v);
        v->pop_back();
    }
}
