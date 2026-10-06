/*
The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array). A vector however, can grow or shrink in size as needed.

Vector Syntax   
 1. vector<vector type> vector name;
    ex: vector<int> vec;

 2. vector<int> vec = {1, 2, 3};

 3. vector<int> vec(3,0)
    Here
        -> 3 = Size of the Vector
        -> 0 = Index value

*** In normal loop we use i,j for accessing array's index but in loop of vector i,j will be used for direct index value. ***
*/

/*
Vector Functions
    1. size -> To find how many element a vector has.
    2. push_back -> To add and element at the end of the vector.
    3. pop_back -> It removes an element from the end of the vector.
    4. front -> To access the first element of a vector.
    5. back -> To access the last element of a vector.  
    6. at -> To access an element at a specific index.
*/

/*
3. Key Differences
Feature	            Static Allocation	    Dynamic Allocation
------------------------------------------------------------------
Memory time	    |   Compile time	   |     Run time
Size	        |   Fixed	           |     Flexible
Memory location	|   Stack	           |     Heap
Speed	        |   Faster	           |     Slower
Memory control	|   Automatic	       |     Manual
*/

/*
Vector Size:
-> The size of a vector means how many elements are currently stored in the vector.

Vector capacity:
-> Capacity means how many elements the vector can store without allocating new memory.

Vector memory:
-> [10][20][30][  ][  ][  ][  ][  ]
    Here
        Size = 3  
        Capacity = 8
*/