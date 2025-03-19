#include <stdio.h>

int main() {
    int cp, sp, amt;

    // Read cost price and selling price
    scanf("%d %d", &cp, &sp);

    // Calculate profit or loss
    if (sp > cp) {
        amt = sp - cp; // Calculate profit
        printf("Profit: %d\n", amt);
    } else if (cp > sp) {
        amt = cp - sp; // Calculate loss
        printf("Loss: %d\n", amt);
    } else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
