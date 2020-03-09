int main(int argc, char const *argv[])
{
/* 
A Graph is an abstract data type that meant to implement the graph concepts from mathematics

A Graph is a collection of nodes,connected by edges

Graph Types:-
Directed Graph
UnDirected Graph


Reperesentation of Graph DS:-
1. Adjacency Matrix
2. Adjacency List
3. Adjacency Set


Terminologies:-
ADJACENT NODES=== if e=[u=v] ,then u and v are nodes called end point of e. u and v are said to be adjacent nodes or neighbors...

DEGREE OF NODES===The degree of nodes u,written deg(u), is the number of edges containing u...

ISOLATED NODE===if deg(u)=0, then u is called isolated node...

PATH=== A path p of length n from a node u to a node v is defined as a sequence of n+1 nodes.
p=(v0,v1,v2,v3,v4......vN)...

CLOSED PATH===The path is said to be closed path if v0=vn...

SIMPLE PATH===The path is said to be simple if all the nodes are distinct,with the exception that v0 may equal vN....

CONNECTED GRAPH==A graph G is said to be connected if there is a path between any of its nodes.....

TREE===A connected graph T without any cycles is called a Tree Graph or Free Tree or simply a Tree....

LABELLED GRAPH===A Graph is to be labeled if its edges are assigned data....

MULTIPLE EDEGS===Distinct edges e and e' are called multiple edges if they connect the same end points that is,if e[u,v] and e'=[u,v]...

LOOP===An edge is called a loop if it has identical end points,that is,if e=[u,u].....

MULTIGRAPH==MultiGraph is a graph consisting of multiple edges and loops....

COMPLETE GRAPH===A Simple graph in which there exists an edge between every pair of vertices is called a complete graph,It is also known as a universal graph or clique....

NULL GRAPH===A graph without any edge is called a NULL GRAPH.in other words,Every vertex in a null graph is isolated vertex..

SUB-GRAPH===A Graph G='(V',E') is a sub-graph of graph G=(V,E)
if V' is subset of V and E is subset if E' Thus for G' to be a sub-graph of graph G
all the vertices and edges if G' should be in G....

*/

//REPRESENT GRAPH IN ADJACENCY MATRIX:-

struct graph{
	int V;  //graph nodes
	int E;  //graph edges
	int **Adj; //two dimensional array address holder
};



	return 0;
}
