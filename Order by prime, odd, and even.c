/*
A set of numbers of size N which are separated by one or more spaces will be passed as input. 
The program should print the prime numbers first followed by odd numbers and finally even numbers. 
Each of these categories, prime numbers, odd numbers and even numbers must be sorted in ascending order among themselves.
The numbers which are prime must be excluded from the list of odd and even numbers (In the case of even numbers only 2 is prime as well as even) 

Input Format:  First line will contain the set of numbers separated by one or more spaces.
Output Format: First line will contain the prime numbers, odd numbers, even numbers in the same order sorted in ascending order.
               The numbers must be separated exactly by one space. 
               
Constraints: Size of the set N will be from 2 to 20.
     
Example Input/Output 1: 

Input:  4 5 9 22 11 2 15 

Output: 2 5 11 9 15 4 22 

Example Input/Output 2:

Input:  611953 494147 493137 493133 493138 

Output: 493133 494147 611953 493137 493138

Explanation: 493133 494147 611953 are prime numbers.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int order(int n, int arr[25])
{
    for(int i=0; i<n; i++)
    {
        for(int j=i + 1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
        printf("%d ", arr[i]);
    }
}

int isprime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int pr[21], ev[21], od[21], p=0, e=0, o=0, n;
    
    while(scanf("%d ", &n)>0)
    {
        if(isprime(n)==1)
        {
            pr[p++]=n;
        }
        else if(n%2==0)
        {
            ev[e++]=n;
        }
        else
        {
            od[o++]=n;
        }
    }
    
    order(p, pr);
    order(o, od);
    order(e, ev);
}
