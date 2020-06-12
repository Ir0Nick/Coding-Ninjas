// Following is the given Tree node structure.
/**************
template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
***************/

bool containsX(TreeNode<int>* root, int x) {
   if(root==NULL)
       return false;
    if(root->data==x)
        return true;
    for(int i=0;i<root->children.size();i++)
        if(containsX(root->children.at(i),x))
            return true;
    return false;
}

