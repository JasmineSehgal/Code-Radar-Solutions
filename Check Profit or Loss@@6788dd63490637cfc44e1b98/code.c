#include <stdio.h>
int main()
{
    int cp,sp, amt; 
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