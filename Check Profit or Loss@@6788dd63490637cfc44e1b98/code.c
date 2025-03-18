#include <stdio.h>

int main()
{
    int cp, sp, amt;

    // Input cost price and selling price of a product
  
    scanf("%d %d",&sp, &cp);
  

    if (sp > cp)
    {
        // Calculate Profit
        amt = sp - cp;
        printf("Profit");
    }
    else if (cp > sp)
    {
        // Calculate Loss
        amt = cp - sp;
        printf("Loss");
    }
    else
    {
   
        printf("No Profit No Loss.\n");
    }

    return 0;
}