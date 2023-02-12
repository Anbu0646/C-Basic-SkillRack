/*
Two whole numbers N1 and N2 are passed as input. The program must print the number of primes present between N1 and N2 (the range is inclusive of N1 and N2) 

Input Format: First line will contain the value of the first number N1 
              Second line will contain the value of the second number N2 

Output Format: First line will contain the count of prime numbers between N1 and N2 

Sample Input/Output:

Example 1: 

Input:  6142 
        6200 
Output: 6 

Explanation: The prime numbers within the range 6142 to 6200 are 6143, 6151, 6163, 6173, 6197, 6199 

Example 2: 

Input:  38 
        70 
Output: 7 

Explanation: The prime numbers within the range 38 to 70 are 41, 43, 47, 53, 59, 61, 67

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1, n2, c=0, f;
    scanf("%d\n %d", &n1, &n2);
    for(int i=n1; i<=n2; i++)
    {
        f=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0 && i!=1)
        {
            c+=1;
        }
    }
    printf("%d", c);
}
