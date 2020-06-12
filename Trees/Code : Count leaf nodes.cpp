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

int numLeafNodes(TreeNode<int>* root) {
if(root==NULL)
    return 0;
if(root->children.size()==0)
    return 1;
    int sum=0;
    for( int i=0 ; i<root->children.size();i++)
        sum+= numLeafNodes(root->children.at(i));
return sum;
}


