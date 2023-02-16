/*
Four towers A, B, C, D are to be erected. Tower A is to communicate with tower C. Tower B is to communicate with tower D. Line of sight issue can occur under the following conditions - when tower B or D is in the straight line connecting A and C - when tower A or C is in the straight line connecting B and D The program must accept the co-ordinates of all four towers and print yes or no depending on whether Line of sight issue will occur or not. 

Input Format:  The first line will contain X and Y co-ordinates of tower A separated by a space. 
	       The second line will contain X and Y co-ordinates of tower B separated by a space. 
               The third line will contain X and Y co-ordinates of tower C separated by a space. 
               The fourth line will contain X and Y co-ordinates of tower D separated by a space 
Output Format: The first line will contain yes or no (smaller case) 

Boundary Conditions: The value of the co-ordinates will be from -500 to 500. 

Example Input/Output 1: 

Input:  0 0 
	0 -2
	2 0
	0 2 
Output: yes 

Example Input/Output 2: 

Input:  0 0
	0 -2 
	2 0 
	0 -5 
Output: no


Solution:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, d, a1, b1, c1, d1, f=0;
    scanf("%d %d %d %d\n %d %d\n %d %d", &a, &a1, &b, &b1, &c, &c1, &d, &d1);
    if(a==c)
    {
        if(b==a)
        {
            if( (b1>=a1 && b1<=c1) || (b1>=c1 && b1<=a1) )
                f=1;
            else if(d==a)
            {
                if( (d1>=a1 && d1<=c1) || (d1>=c1 && d1<=a1) )
                    f=1;
            }
        }
    }
    else if(a1==c1)
    {
        if(b1==a1)
        {
            if( (b>=a && b<=c) || (b>=c && b<=a) )
                f=1;
            else if(d1==a1)
            {
                if( (d>=a && d<=c) || (d>=c && d<=a) )
                    f=1;
            }
        }
    }
    if(b==d)
    {
        if(a==b)
        {
            if( (a1>=b && a1<=d1) || (a1>=d1 && a1<=b1) )
                f=1;
            else if(c==a)
            {
                if( (c1>=b1 && c1<=d1) || (c1>=d1 && c1<=b1) )
                    f=1;
            }
        }
    }
    else if(c1==a1)
    {
        if(a1==b1)
        {
            if( (a>=b && a<=d) || (a>=d && a<=b) )
                f=1;
            else if(c1==a1)
            {
                if( (c>=b && c<=d) || (c>=d && c<=b) )
                    f=1;
            }
        }
    }
    if(f==1)
        printf("yes");
    else 
        printf("no");
}
