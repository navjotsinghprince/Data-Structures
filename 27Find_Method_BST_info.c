int main(int argc, char const *argv[])
{

	//This is Find Data Element Code
	struct BSTNode *Find(struct BSTNode *root,int data){
		if (root==NULL)
		{
			return (NULL);
		}
		if(data<root->data){
			return (Find(root->leftdata));
		}
		else if (data>root->data)
		{
			return(Find(root->right,data));
		}
		return(root);
	}

	return 0;
}

//Navjot Singh Prince :)