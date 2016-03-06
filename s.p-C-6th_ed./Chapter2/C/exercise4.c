#include <stdio.h>

// 1 year = 12 months

int main(){
    int years;
    printf("How old are you? ");
    scanf("%d",&years);
    printf("\n%d is %d months.", years, years*12);

    return 0;
}


