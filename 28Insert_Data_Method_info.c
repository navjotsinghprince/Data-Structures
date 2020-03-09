int main(int argc, char const *argv[])
{
	void Insert(struct BSTNode *root,int data){

		struct BSTNode *par;
		struct BSTNode *n=malloc(sizeof(struct BSTNode));
		n->left=NULL;
		n->data=data;
		n->right=NULL;

		if (root==NULL)
		{
			root=n;
		}
		
		else{
			par=root;
			while(par!=NULL){

				if(par->data>data){
					if(par->left==NULL)
					{
						par->left=n;
					}
					par=par->left;
				}
				if(par->data<data)
				{
					if(par->right==NULL){
						par->right=n;
					}
					par=par->right;
				}
				
			}  //End of While		
		}     //End of else
	}        //End of Function
	return 0;
} //int main end
