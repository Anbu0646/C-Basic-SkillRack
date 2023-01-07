/*
The program must accept N integers and an integer X as the input. The program must print the integers after the Xth odd integer in reverse order. 
If there is no integer after the Xth odd integer, the program must print -1 as the output. 

Note: At least X odd integers are always present in the N integers. 

Boundary Condition(s):  1 <= N <= 10^4 
                        1 <= X <= 1000 
                        
Input Format:  The first line contains the two integers N and X separated by a space. The second line contains N integers separated by space(s). 
Output Format: The first line contains the integer value(s) or -1. 

Example Input/Output 1:

Input:  9 3 
        10 5 17 22 90 89 20 85 54 
Output: 54 85 20 

Explanation: Here X = 3. 
             The 3rd odd integer is 89. 
             So all the integers after 89 are printed in the reverse order. 
             Hence the output is 54 85 20 

Example Input/Output 2: 

Input:   5 2 
         10 20 15 30 25 
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n], c=0, l=0;
    for(int i=0; i<n; i++)  scanf("%d ", &arr[i]);
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            c++;
            if(c==x)
                l=i;
        }
    }
    if(c<=x)  printf("-1");
    else
    {
        for(int i=n - 1; i>l; i--)
            printf("%d ", arr[i]);
    }
}
