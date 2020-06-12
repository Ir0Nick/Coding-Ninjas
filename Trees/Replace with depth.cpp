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




void replaceWithDepthValue(TreeNode<int> *root,int k=0){
    root->data = k;
    for(int i=0;i<root->children.size();i++)
    {
        replaceWithDepthValue(root->children.at(i),k+1);
    }
  
}

