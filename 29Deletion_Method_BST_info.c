int main(int argc, char const *argv[])
{
 //Deletion is Simple if we are deleting a leaf node
 //Three cases
 //-if the element to be deleted is a leaf node
 //-if the element to be deleted has one child
 //-if the element to be deleted has both children


 struct BSTNode *Delete(struct BSTNode *root,int data){
 struct BSTNode *temp;
 if(root==NULL){
 printf("No Such Elements exits");
 }
  else if(data<root->data){
   root->left=Delete(root->left,data);
 }
 else if(data>root->data){
  root->right=Delete(root->right,data);
 }
 

 else//element found
  if (root->left && root->right) //both child
  {
	temp=FindMax(root->left);
	root->data=temp->data;
	root->left=Delete(root->left,root);
  }
  
  else{ //one or more child
     temp=root;
    if(root->left==NULL){
     root=root->right;
     }
	if(root->right==NULL){
		root=root->left;
	 }

	 free(temp);
  }//End of else
  return (root);
 }//End of function
 return 0; 

}