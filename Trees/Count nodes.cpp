// Following is the given Tree node structure
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

int nodesGreaterThanX(TreeNode<int> *root, int x) {
   if(root==NULL)
       return 0;
    int sum = (root->data > x);
    for(int i=0;i<root->children.size();i++)
    {
        sum += nodesGreaterThanX(root->children.at(i),x);
    }
    return sum;

}

