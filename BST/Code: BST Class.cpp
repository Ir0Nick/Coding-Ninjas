/**************
 
 * Following is BinaryTreeNode class -
 
template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    
    BinaryTreeNode(T data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
 
 * Foloowing is main function which we are using internally

int main(){
    BST *tree = new BST();
    int choice, input;
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
                cin >> input;
                tree->insert(input);
                break;
            case 2:
                cin >> input;
                tree->deleteData(input);
                break;
            case 3:
                cin >> input;
                if(tree->hasData(input)) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
                break;
            default:
                tree->printTree();
                return 0;
                break;
        }
    }
}
*******************/


class BST {
BinaryTreeNode<int>* root;
    
    bool search(int data, BinaryTreeNode<int>* root)
    {
        if(root==NULL)
            return 0;
        if(root->data == data)
            return 1;
        if(data<root->data)
            return search(data,root->left);
        else return search(data,root->right);
    }
    
	BinaryTreeNode<int>* insert(int data, BinaryTreeNode<int>*root)
    {
        if(root ==NULL)
        {
            BinaryTreeNode<int> * node = new BinaryTreeNode<int>(data);
            return node;
        }
        if(data < root->data)
        {
            root->left = insert(data, root->left);
        }
        else if(root->data < data)
        {
            root->right = insert(data, root->right);
        }
        return root;
    }
    
    BinaryTreeNode<int>* deleteData(BinaryTreeNode<int>*root,int data)
    {	
        if(root==NULL)
            return root;
        
        if(root->data < data)
            root->right = deleteData(root->right, data);
        
         if(root->data > data)
			root->left = deleteData(root->left , data);
        
         if(root->data == data)
        {
            	if(root->right==NULL)
                    	root = root->left;
        		
            	else if(root->left == NULL)
                    	root = root->right;
             
            	else {
                    	
                    		BinaryTreeNode<int>* ptr = root->right;
                    
                     			while (ptr->left!=NULL)
                                		ptr = ptr->left;
                    			root->data = ptr->data;
                    			root->right = deleteData(root->right , ptr->data);
                    }
          
             	
        }
          return root;
    }
    
     void printTree(BinaryTreeNode<int> * root)
    {
        if(root==NULL)
        	return;
        cout<<root->data<<':';
         if(root->left==NULL&&root->right==NULL)
             cout<<'\n';
        if(root->left)
        { cout<<"L:"<<root->left->data;
        	
                cout<<',';
            if(!root->right)cout<<'\n';
        }
         if(root->right)
            cout<<"R:"<<root->right->data<<'\n';
        printTree(root->left);
        printTree(root->right);
    }
    
    public:
    BST()
    {
        root = NULL;
    }
    
    bool hasData(int data)
    {
        return search(data,root);
    }
    
    void insert(int data)
    {
        root = insert(data,root);
    }
    
    void deleteData(int data)
    {
        root = deleteData(root,data);
    }
    
    void printTree()
    {
         printTree( root);
    }
};
