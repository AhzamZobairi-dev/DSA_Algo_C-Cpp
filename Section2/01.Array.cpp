/*
 Array -- Collection of similar data type

 Delaration of Array
 int Arr[5]; -- STORED IN STACK MEMORY

-- FOREACH Loop also discuss
*/

#include<iostream>
using namespace std;

int main() // STORED IN CODE MOMORY

{
//declation of array of 5 integer makes its size = 5 * sizeof(int) => 5*4 = 20
    int A[5];      

    A[0] = 2;                       // can initialize the element using index
    A[1] = 4;
    A[2] = 6;

    cout << A[1] << endl;           // Can access element using index

// Can use printf as well -- it works but incase of error we need to add #include<stdio.h> in headerfile
    printf("%d\n",A[1]);
    cout << "End of A" << endl;

// Declaring and Initializing array at same time
    int B[5] = {3,4,2,6,7};

    cout << sizeof(B) << endl;
    cout << B[1] << endl;
    cout << "End of B" << endl;
// Can skip the size while initializing
    int C[] = {7,4,0,2,6,8,9};       // 7 element is in array so size = 7 * sizeof(int) = 7*4 = 28

    cout << sizeof(C) << endl;
    cout << C[2] << endl;
    cout << "End of C" << endl;
// During initialization if we have less element mentioned than size than rest element is 0 
    int D[9] = {7,4,3,2,6};

    cout << sizeof(D) << endl;
    cout << D[2] << endl;
    cout << D[3] << endl;
    cout << D[4] << endl;
    cout << D[5] << endl;
    cout << D[6] << endl;
    cout << D[7] << endl;
    cout << "End of D INDEX access" << endl;

// We can iterate through the array using FOR LOOP
    for( int d=0; d<9; d++)
    {
        cout << D[d] << endl;
    }
    cout << "End of d FOR EACH" << endl;

// To initialize all element of array to 0 during declaration
    int E[7] = {0};

/* Iterate through array using FOREACH loop

-- Foreach loop is used to iterate over the elements of a container (array, vectors, etc) 
quickly without performing initialization, testing, and increment/decrement. 
-- The working of foreach loops is to do something for every element rather than doing 
something n times.
-- No FOREACH loop in C. introduced in C++ and JAVA

SYNTAX: 
    for (data_type  variable_name : container_name) 
    {
     operations using variable_name
    }
*/ 

    for( int e:E)
    {
        cout << e << endl;
    }
    cout << "End of E" << endl;

// Variable sized Array
    int n;
    cout << "Enter Size : ";
    cin >> n;               // Lets take 4 as input 

  //int a[n] = {1,2,3,4,5}  --ERROR, variable size array cannot be initalize
    int F[n];
    F[0] =2;        // we can initialize using index
    F[1] =3;

    for( int f:F )
    {
        cout << f << endl;  // first 2 output will be 2,3 and rest 2 will be garbage value
    }        
    cout << "End of F" << endl;
    return 0;
}

/*
                        OUTPUT

4
4
End of A
20
4
End of B
28
0
End of C
36
3
2
6
0
0
0
End of D INDEX access
7
4
3
2
6
0
0
0
0
End of d FOR EACH
0
0
0
0
0
0
0
End of E
Enter Size : 4
2
3
1366476501
21874
End of F

*/