int main(int argc, char const *argv[])
{
/*
There is a need to maintain the binary search tree to be of balanced height,so that it is possible to obtained for the search option a time complexity of O(log n ) in wrost case.

One of the most popular balanced tree was introduced by Adelson-Velskii-and-Landis (AVL)

An empty binary tree is an AVL Tree.
A Non empty binary tree T is an AVL tree if given TL and TR to be left and right subtrees of T and height(TL) and height(TR) to be the heights of subtree TL and TR respectively,TL and TR are AVL trees..

BALANCE FACTOR=(h(TL)-h(TR))<1) 
FOR AVL tree the balance factor of a node can be either 0,1,or -1

ROTATION
If after insertion of the element,the balance factor of any node in the tree is affected so as to render the binary search tree unbalanced,
we resort to techniques called rotations to restore the balance of the search tree.

ROTATION TYPES:)

LL ROTATION=Inserted node is in the left subtree of left subtree of node A.....

RR ROTATION=Inserted node is in the right subtree of right subtree of node A.....

LR ROTATION=Inserted node is in the right subtree of left subtree of node A.....

RL ROTATION=Inserted node is in the left subtree of right subtree of node A.....

TRICK TO SOLVE:)
For LL and RR Rotation identify A and B then make A as a child of B

For LR and RL Rotation identify A,B and C then make A and B child of C


 */
	return 0;
}
