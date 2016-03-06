#include <stdio.h>

int main(){
    int miles;
    printf("Please give me amount of miles: ");
    scanf("%d", &miles);
    printf("\nThis is %d meters. ", miles*1852);
    return 0;
}
