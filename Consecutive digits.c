/*
The program must accept an integer N as the input. The program must print the digit(s) which are consecutively repeated in the integer N in reverse order as the output. If there is no consecutive repeated digit, then print -1 as the output. 

Example Input/Output 1: 

Input:  8922909990 
Output: 92 

Example Input/Output 2: 

Input:  8929090 
Output: -1

Soution:
*/

#include <stdio.h>
#include <string.h>

int main() 
{
  char num[100];
  scanf("%s", num);
  int len = strlen(num) - 1, flag = 1;
  
  while (len >= 0) 
  {
    if (num[len - 1] == num[len] && num[len + 1] != num[len]) 
    {
      printf("%c", num[len]);
      flag = 0;
    }
    len--;
  }
  
  if (flag) printf("-1");
  return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char arr[1001], arr1[1001];
    scanf("%s", arr);
    int len=strlen(arr), c=0, l=0;
    for(int i=0; i<len-1; i++){
        if(arr[i]==arr[i+1]){
            for(int j=i; j<len-1; j++){
                if(arr[j]==arr[j+1])
                    c++;
                else
                    break;
            }
            if(c>0){
                arr1[l++]=arr[i];
                i+=c; c=0;
            }
        }
    }
    if(l==0)
        printf("-1");
    else
        for(int i=l-1; i>=0; printf("%c",arr1[i--]));
}
*/
