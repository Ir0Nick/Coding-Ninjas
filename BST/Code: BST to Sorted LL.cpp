// Following is the Binary Tree node structure
/**************
 
 template <typename T>
 class Node{
    public:
    T data;
    Node<T> *next;
    
    Node(T data){
        this -> data = data;
        this -> next = NULL;
    }
 };
 
 class BinaryTreeNode {
 public :
 T data;
 BinaryTreeNode<T> *left;
 BinaryTreeNode<T> *right;
 
 BinaryTreeNode(T data) {
 this -> data = data;
 left = NULL;
 right = NULL;
 }
 };
 ***************/

Node<int>* constructBST(BinaryTreeNode<int>* root) {
    
    if(root==NULL)
        return NULL;
     Node<int>* temp = new Node<int>(root->data);
    if( root->left==NULL && root->right==NULL)
        	return temp;
   
    Node<int>* leftll = constructBST(root->left);
    Node<int>* rightll = constructBST(root->right);
    Node<int>* ptr = leftll;
    while(ptr!=NULL&&ptr->next!=NULL)
        ptr=ptr->next;
    if(ptr!=NULL)
    ptr->next = temp;
    temp->next = rightll;
    if(ptr!=NULL)
    return leftll;
    return temp;
    
}
