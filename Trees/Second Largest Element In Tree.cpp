#include<queue>

TreeNode <int>* secondLargest(TreeNode<int> *root) {
    if(root == NULL)
        return NULL;
    if(root->children.size()==0)
        return NULL;
    queue<TreeNode<int>*> q;TreeNode<int> *l=root,*sl=NULL,*temp;

    q.push(root);
    while(!(q.empty()))
    {
        TreeNode<int> * ptr = q.front();
        q.pop();
        	for(int i=0 ; i < ptr->children.size() ; i++)
            {	TreeNode<int>* t =ptr ->children.at(i);
             		q.push(t);
            }
             	if(ptr->data > l->data)
                    {
                        sl= l;
                        l= ptr;
                    }
                
                	 if(sl==NULL)
                    { if(root!=ptr)
                     sl =ptr;   
                    }
                	
                	if(ptr->data!=l->data&&ptr->data > sl->data)
                        sl = ptr;
                	
            }
    if(sl->data==l->data)
        sl=NULL;
  return sl;  


  return sl;  

}

