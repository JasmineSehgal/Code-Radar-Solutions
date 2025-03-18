#include <stdio.h>
int main()
{
    int cp,sp, amt;
    scanf("%d %d %d",&amt, &sp, &cp); 
    if(sp > cp)
    {
        amt = sp - cp;
        printf("Profit");
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("Loss");
    }
    else
    {
        printf("No Profit No Loss.");
    }
    return 0;
}