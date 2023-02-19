/*
The day corresponding to the first date of a given month is provided as input to the program. Then a specific date D of the month is provided. 
The program must print the day (one among MON,TUE, WED, THU, FRI, SAT, SUN) of the date D. 

Input Format:  First line will contain the day (one among MON,TUE, WED, THU, FRI, SAT, SUN) of the first date of the month. 
               Second line will contain the value of the date D as an integer value. 
Output Format: First line will contain the day of the date D 

Sample Input/Output: 

Example 1: 

Input:  MON 
        10 
Output: WED

Explanation:  If it is Monday on 1st of the month, then 10th of the month will be a Wednesday. Hence WED is printed.

Example 2: 

Input:  FRI 
        24
Output: SUN 

Explanation: If it is Friday on 1st of the month, then 22nd will also be a Friday. Hence 24th of the month will be a Sunday. Hence SUN is printed.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char day[4], mon[7][4]={"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int dat, updat=-1, changedat;
    scanf("%s\n %d", day, &dat);
    
    for(int i=0; i<7; i++)
    {
        if(strcmp(mon[i], day)==0)
        {
            updat=i;
        }
    }
    
    changedat=(updat+dat)%7;
    
    switch(changedat)
    {
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
        default:
            printf("INVALID");
            break;
    }
}
