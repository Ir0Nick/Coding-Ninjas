// Following is the given TreeNode structure.
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


int sumOfNodes(TreeNode<int>* root) {
  int sum = root->data;
    for (int i=0 ; i<root->children.size();i++)
    {
        	sum += sumOfNodes(root->children.at(i));
    }
    return sum;
}

