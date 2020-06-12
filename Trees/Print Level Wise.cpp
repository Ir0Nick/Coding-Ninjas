#include<queue>
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


void printLevelWise(TreeNode<int>* root) {
    TreeNode<int> * ptr,*child;
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!(q.empty()))
    {
        	ptr = q.front();
        	q.pop();
        	cout << ptr->data <<":";
        	for(int i=0;i<ptr->children.size();i++)
            {
                child = ptr->children.at(i);
                q.push(child);
                cout << child->data;
                if(i!=ptr->children.size()-1)
                    cout<<',';
                
            }
        cout <<'\n';
        
    }
    
}
