#include <stdio.h>

void c_time(int hour, int minutes){
    printf("\nCurrent time: %i:%i", hour,minutes);
}

int main(){
    int hour, minutes;
    printf("How many hours? ");
    scanf("%i", &hour);
    printf("\nHow many minutes? ");
    scanf("%i", &minutes);
    c_time(hour, minutes);


    return 0;
}
