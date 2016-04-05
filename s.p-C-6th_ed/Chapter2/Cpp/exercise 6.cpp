#include <iostream>

using namespace std;

float lightyears(float lyrs){
    lyrs = lyrs*63240;

    return lyrs;
}

int main(){
    float lyrs;
    cout << "How much lightyears do you want to travel? ";
    cin >> lyrs;
    cout << endl << lyrs << " light years are equal to " << lightyears(lyrs) << " astronomical units.";


    return 0;
}
