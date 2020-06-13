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

vector<int>* longestPath(BinaryTreeNode<int>* root) {
	if(root==NULL)
        return NULL;
    if(!root->left && !root->right)
    {
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }
    vector<int>* leftAns = longestPath(root->left);
    vector<int>* rightAns = longestPath(root->right);
    if(!leftAns)
    {
        rightAns->push_back(root->data);
        return rightAns;
    }
    else if(!(rightAns))
    {
        leftAns->push_back(root->data);
        return leftAns;
    }
    else
    {
        if(leftAns->size() < rightAns->size())
        {
            rightAns->push_back(root->data);
            delete leftAns;
            return rightAns;
        }
    	 else{
             leftAns->push_back(root->data);
             delete rightAns;
             return leftAns;
         }
    }
    
}
