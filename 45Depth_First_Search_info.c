int main(int argc, char const *argv[])
{
/* 
DFS uses STACK

During execution of algorithms,each node N of G will be in one of three states called status of N
--Status=1(ready state)
--Status=2(waiting state)
--Status=3(processed state)


ALGORITHM  OF DFS:-
This algorithm executes a breadth first search on a graph G beginning at a starting node A.
 
1=Initialize all nodes to the ready state (STATUS=1)
2=Push the starting node A onto STACK and change its status to the waiting state (STATUS=2)
3=[LOOP] Repeat step 4 and 5 until stack is empty
4=Pop the node N of Stack .Process N and Change its status to the processed state(STATUS=3)
5=Push onto stack all the neighbors of N that are still in the ready state(STATUS=1) and change their status to the waiting state (STATUS=2)
[END of step 3 Loop]
6=Exit 
 
 */
	return 0;
}
