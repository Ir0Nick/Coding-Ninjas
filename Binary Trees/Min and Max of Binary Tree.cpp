#include<climits>
// Following is the Binary Tree node structure
/**************
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
 
 // PairAns class -
 class PairAns {
    public :
        int min;
        int max;
 };
 
***************/

PairAns minMax(BinaryTreeNode<int> *root) {
 if(root==NULL)
 {PairAns p;p.min=INT_MAX;
  p.max=INT_MIN;
  return p;
     
 }
 //    if(root->left==NULL&&root->right==NULL)
 // {  PairAns p;p.min=p.max=root->data;
 //     return p;
 // }
/*  else if(root->left==NULL)
  {
      PairAns x =minMax(root->right);
     if(x.max<root->data)
        x.max = root->data;
       x.min = (x.min>root->data)? root->data : x.min;
  		return x;
  }
  else if(root->right==NULL)
  {PairAns x= minMax(root->left);
  if(x.max<root->data)
        x.max = root->data;
        x.min = (x.min>root->data)? root->data : x.min;
  		return x;
  } */
  
   PairAns lp,rp,x;
    lp = minMax(root->left);
    rp = minMax(root->right);
    x.min = (rp.min < lp.min)? rp.min: lp.min;
    x.max = (rp.max > lp.max)? rp.max: lp.max;
   x.min = (x.min>root->data)? root->data : x.min;
    if(x.max<root->data)
        x.max = root->data;
  	  return x;
    

}
