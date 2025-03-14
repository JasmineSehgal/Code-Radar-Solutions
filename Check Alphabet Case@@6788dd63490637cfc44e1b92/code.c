#include <stdio.h>
#include <ctype.h>
int main() {
   char ch;
   scanf("%c",&ch);
   if(islower(ch)){
       printf("LowerCase");
   }
   if(isupper(ch)){
       printf("UpperCase");
   }
    return 0;
}