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

void postOrder(TreeNode<int>* root) {
  if(root==NULL)
      return;
    for(int i= 0; i<root->children.size(); i++)
        	postOrder(root->children.at(i));
    cout<<root->data<<' ';
}

