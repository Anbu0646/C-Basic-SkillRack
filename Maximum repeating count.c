/*
Given an array of integers of length N, the program must find the value which repeats in maximum number of times and print the number.
In case of ties, choose the smaller number and print it. 

Boundary Conditions: Length of array N will be from 2 to 100 

Input Format:  First line will contain the array of integers of length N separated by one or more spaces. 
Output Format: The integer value which repeats the maximum number of times.

Sample Input/Output: 

Example 1:

Input:  10 20 30 20 30 10 30 20 
Output: 20 

Explanation: Both 20 and 30 repeats three times. But 20 is the smaller number and hence 20 is printed as output. 

Example 2: 

Input:  1 2 3 5 9 2 9 6 9 
Output: 9 

Explanation: 9 repeats thrice which is more than the repetition count of any other number.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[101], k=0, mxc=0, arrv;
    while(scanf("%d ", &arr[k])>0)
    {
        k++;
    }
    
    for(int i=0; i<k; i++)
    {
        int c=0;
        for(int j=i + 1; j<k; j++)
        {
            if(arr[i]==arr[j])
            {
                c+=1;
            }
        }
        if(c>mxc)
        {
            mxc=c;
            arrv=arr[i];
        }
        else if(mxc==0)
        {
            arrv=arr[0];
        }
    }
    printf("%d", arrv);
}
