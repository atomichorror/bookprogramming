#include <stdio.h>

float lightyears(float lyrs){
    lyrs = lyrs*63240;

    return lyrs;
}

int main(){
    float lyrs;
    printf("How much lightyears do you want to travel? ");
    scanf("%f", &lyrs);
    printf("\n%f light years are equal to %f astronomical units." , lyrs,lightyears(lyrs)) ;


    return 0;
}
