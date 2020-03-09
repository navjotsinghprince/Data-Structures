int main(int argc, char const *argv[])
{
/* 
BFS use Queue
Similar to level order traversing in tree

During execution of algorithms,each node N of G will be in one of three states called status of N
--Status=1(ready state)
--Status=2(waiting state)
--Status=3(processed state)

ALGORITHM  OF BFS:-
This algorithm executes a breadth first search on a graph G beginning at a starting node A.

1=Initialize all nodes to the ready state(STATUS=1)
2=Put the starting node A in Queue and change its status to the waiting state(STATUS=2)
3=Loop Repeat step 4 and 5 until queue is empty
4=Remove the front node N of Queue Process N and change the status of N to The processed state(STATUS=3)
5=Add the rear of Queue all the neighbors of N that are in ready state(STATUS=1) and change their status to waiting state (STATUS=2) 
[END OF STEP 3 LOOP]
6=EXIT

 */
	return 0;
}
