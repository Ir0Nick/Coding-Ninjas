#include<queue>
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

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    TreeNode<int> * max = root;
    queue<TreeNode<int> *> q;
    q.push(root);
    while(!(q.empty()))
    {
        TreeNode<int> * ptr = q.front();
        q.pop();
        for(int i=0 ; i< ptr->children.size(); i++)
        {
            TreeNode<int> * child = ptr->children.at(i);
            q.push(child);
            if(child->data > max->data)
                max = child;
        }
        
    }
    return max;
}

