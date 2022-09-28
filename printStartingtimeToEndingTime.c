/*Input
  11:59:50
  12:00:05
*/  

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ah,am,as,bh,bm,bs;
    scanf("%d:%d:%d\n%d:%d:%d",&ah,&am,&as,&bh,&bm,&bs);
    while(ah!=bh || am!=bm || as!=bs){
        printf("%02d:%02d:%02d\n",ah,am,as);
        (as<59)?(as++):(as=0);
        if(as==0){
            (am<59)?(am++):(am=0);
        }
        if(am==0 && as==0){
            (ah<23)?(ah++):(ah=0);
        }
    }
    printf("%02d:%02d:%02d",ah,am,as);

}
