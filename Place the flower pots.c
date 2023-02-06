/*
There are three shelves on which pots can be placed. The capacities of the shelves are C1, C2, and C3. N flower pots are to be placed on these shelves. 
The program must accept C1, C2, C3, and N as the input and print the minimum number of shelves used to place all the N pots on these three shelves. 
If N is greater than C1+C2+C3 (that is more than the capacity of these three shelves), then the program must print the count of the pots exceeding the capacity of the shelves.

Note: C1 C2 >= C3

Example Input/Output 1:

Input:  9 8 7
        11
Output: 20

Example Input/Output 2:

Input:  5 3 2
        12
Output: 32

SOLUTION:
*/

#include <stdio.h>

int main()
{
    int c[5], n, ctr=0, diff=0;
    for(int i=0; i<3; i++) 
        scanf("%d ", &c[i]);
    scanf("%d", &n);
    for(int i=0; i<3; i++)
    {
        diff = n - c[i];
        ctr++;
        if(diff<=0) 
        {
            diff=0;
            break;
        }
    n = diff;
    }
    printf("%d %d", ctr, diff);
}
