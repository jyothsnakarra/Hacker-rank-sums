# projects

## QUESTION - Array Manipulation ##

Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each of the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

Example:
n=10
queries=[[1,5,3], [4,8,7], [6,9,1]]

Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1

Add the values of k between the indices a and b inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]

The largest value is 10 after all operations are performed.


Function Description:

Complete the function arrayManipulation in the editor below.

arrayManipulation has the following parameters:

i   1. nt n - the number of elements in the array
    2.int queries[q][3] - a two dimensional array of queries where each queries[i] contains three integers, a, b, and k.

Returns:
     1. int - the maximum value in the resultant array


Input Format:

The first line contains two space-separated integers n and m, the size of the array and the number of operations.
Each of the next  lines contains three space-separated integers a, b and k, the left index, right index and summand.


Constraints:
    1.  3<=n<=10^7
    2.  1<=m<=2*10^5
    3.  1<=a,b<=n
    4.  0<=k<=10^9
