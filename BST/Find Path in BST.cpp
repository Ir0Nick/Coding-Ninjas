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

vector<int>* findPath(BinaryTreeNode<int> *root , int data){
if(root==NULL)
    return NULL;
if(root->data == data)
{
    vector<int>* v = new vector<int>;
    v->push_back(data);
    return v;
}
    if(root->data < data)
    {vector<int>* v = findPath(root->right,data);
     if(v!=NULL)
         v->push_back(root->data);
     return v;
    }
    else
    {vector<int>* v = findPath(root->left,data);
		if(v!=NULL)
            v->push_back(root->data);
      return v;
    }
   
}
