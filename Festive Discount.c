/*
In a shop, discounts were provided as below. - If the label price of an item is more than Rs.400, then the discount is 20%. 
                                             - If the label price of an item is more than Rs.500, then the discount is 25%. 
                                             - If the label price of an item was more than or equal to Rs.1000, then the discount is 50%. 
                                             - Finally if the total purchase amount after discount is more than Rs.2000 a further discount of Rs.100 is provided. 
The label prices of the items purchased will be provided as input. The program has to calculate the final price payable by the buyer (customer). 

Boundary Conditions: Number of items bought will be from 1 to 20. 

Input Format:  First line will contain the number of items (N) Next N lines will contain the label price of N items.
Output Format: The final price payable by the buyer rounded off to two decimal places. 

Sample Input/Output: 

Example 1: 

Input:  3 
        1000 
        1200 
        400 
Output: 1500.00

Explanation: 1000, 1200, 400 after discount becomes 500, 600, 400 (20% discount is applicable only if the label price is more than Rs.400)
             Hence net payable amount = 500+600+400 = 1500 

Example 2: 

Input:  5 
        450 
        500 
        2000 
        1600 
        300
Output: 2760.00 

Explanation: After discount the selling price of items are 360, 400, 1000, 800, 300. Net amount = 2860. 
             As 2860 > 2000, a further discount of 100 is provided and hence output is 2760.00

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[n], s=0;
    
    for(int i=0; i<n; i++)
        scanf("%d\n", &arr[i]);
        
    for(int i=0; i<n; i++)
    {
        if(arr[i]>400 && arr[i]<=500)
        {
            s+=arr[i]-((arr[i]*20)/100);
        }
        else if(arr[i]>500 && arr[i]<1000)
        {
            s+=arr[i]-((arr[i]*25)/100);
        }
        else if(arr[i]>=1000)
        {
            s+=arr[i]-((arr[i]*50)/100);
        }
        else
        {
            s+=arr[i];
        }
    }
    
    printf("%.2f", (s>2000)?((float) s - 100.0):((float) s));
}
