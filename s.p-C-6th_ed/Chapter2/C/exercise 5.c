#include <stdio.h>

float cel_to_fah(float degrees){
    degrees = 1.8*degrees + 32.0;

    return degrees;
}

int main(){
    float degrees;
    printf("Give me an amount of degrees in Celcius scale: ");
    scanf("%f", &degrees);
    printf("\n%f degrees in Celcius scale is equal to %f degrees in Fahrenheit scale." , degrees,cel_to_fah(degrees)) ;


    return 0;
}
