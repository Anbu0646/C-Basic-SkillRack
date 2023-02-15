/*


SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, carc=0, mxavgm=0, carn;
    scanf("%d\n", &n);
    int fuel[1001], dis[1001];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d %d\n", &fuel[i], &dis[i]);
    }
    
    for(int i=0; i<n; i++, carc++)
    {
        float avgm=dis[i]/fuel[i];
        if(carc==0)
        {
            mxavgm=avgm;
            carn=carc + 1;
        }
        else
        {
            if(mxavgm<avgm)
            {
                mxavgm=avgm;
                carn=carc + 1;
            }
        }
    }
    
    printf("%d", carn);
}
