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
int sum(TreeNode<int>* root)
{
     	if(root ==NULL)
            return 0;

    int s =root->data;
       	TreeNode<int>* max = root;
    for(int i=0;i<root->children.size();i++)
			s+=root->children.at(i)->data;
    return s;
}
TreeNode<int>* maxSumNode(TreeNode<int> *root){

    	if(root ==NULL)
            return 0;
    TreeNode<int>* max =root;
    
    for(int i=0;i<root->children.size();i++)
        if(sum(max)<sum(maxSumNode(root->children.at(i))))
        {
            max = maxSumNode(root->children.at(i));
        }
    return max;
    
}



