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

int height(TreeNode<int>* root) {
   int m=0;
   for(int i=0;i<root->children.size();i++)
   {
       		if(m < height(root->children.at(i)))
                m= height(root->children.at(i));
   }
    return 1+m;

}

