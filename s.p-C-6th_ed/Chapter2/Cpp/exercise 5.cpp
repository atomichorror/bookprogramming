#include <iostream>

using namespace std;

float cel_to_fah(float degrees){
    degrees = 1.8*degrees + 32.0;

    return degrees;
}

int main(){
    float degrees;
    cout << "Give me an amount of degrees in Celcius scale: ";
    cin >> degrees;
    cout << endl << degrees << " degrees in Celcius scale is equal to " << cel_to_fah(degrees) << " degrees in Fahrenheit scale.";


    return 0;
}
