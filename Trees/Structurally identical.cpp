// Following is the Tree node structure
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

bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
  if(root1==NULL&&root2==NULL)
      return true;
  if(root1->data!=root2->data)
      return false;
  if(root1->children.size()!=root2->children.size())
    return false;
      for(int i= 0;i<root1->children.size();i++)
      {
          if(!(isIdentical(root1->children.at(i),root2->children.at(i))))
              return false;
      }
    return true;
}
