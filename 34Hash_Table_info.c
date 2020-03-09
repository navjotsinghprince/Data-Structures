int main(int argc, char const *argv[])
{
/* Hash Table
Hash Table is a Data Structure Where the data elements are stored(Inserted),Searched,Deleted based on the keys generated for each element,which is obtained from a hashing function.
A Property implemented hash table would always promise an average insert,delete,retrivel time of O(1)

Hash Function
A Hash Function usually means a function that compresses,meaning the output is shorter than the input.
A Hash Function is any function that can be used to map data of arbitrary size to data of fixed size. 

Parameters Of Good Hash Function:-
Easy to compute
Easy Distribution
Minimize Collisions

Collision 
A situation when the resultant hashes for two or more data elements in the data set,maps to the same location in the has table,is called a hash collision..
In such a situation two or more data elements would qualify to be stored/mapped to the same location in the hash table..


Two Types of Collision Resolutions
Open Hashing(Chaining)
Closed Hashing(Open Addressing)

The different between the two has to do with
--Whether collisions are stored outside the table(Open Hashing),
--Whether collisions result in storing one of the records at another slot in the table(Closed Hashing)

OPEN HASHING
The simplest form of open hashing defines each slot in the hash table to be the head of a linked list.....
All records that hash to a particular slot are placed on that slot's linked list.....


Closed Hashing
Linear Probing==i+1,i+2
Quadratic Probing==i+1(2),i+4(5),i+9(10)
Double Probing==i+5,i+10,i+15



 */
	return 0;
}
