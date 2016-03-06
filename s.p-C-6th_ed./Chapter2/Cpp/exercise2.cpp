#include <iostream>

using namespace std;

int main(){
    int miles;
    cout << "Please give me amount of miles: ";
    cin >> miles;
    miles = miles *1852;
    cout << endl << "This is " << miles << " meters.";
    return 0;
}
