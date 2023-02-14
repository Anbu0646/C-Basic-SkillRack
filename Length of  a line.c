/*
A line is denoted by the x and y co-ordinates of the two end points. The program must print the length of the line. 

Input Format:  First line will contain the x and y co-cordinates of point 1 separated by a space. 
               Second line will contain the x and y co-cordinates of point 2 separated by a space

Output Format: The length of the line rounded up to two decimal places. 

If there is no floating point representation then a .00 is to appear at the end of the output.

Sample Input/Output:

Example 1: 

Input:  0 4
        3 0 
Output: 5.00 

Example 2: 

Input:  2 2
        14 7 
Output: 13.00

Example 3: 

Input:  0 0
        3 3 
Output: 4.24

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x1, y1, x2, y2, s1, s2;
    scanf("%d %d\n %d %d", &x1, &y1, &x2, &y2);
    s1=pow(abs(x1-x2), 2);  s2=pow(abs(y1-y2), 2);
    float d=sqrt((float) s1 + s2);
    printf("%.2f", d);
}
