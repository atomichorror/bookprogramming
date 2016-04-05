#include <iostream>

using namespace std;

void c_time(int hour, int minutes){
    cout << endl << "Current time: " << hour << ":" << minutes;
}

int main(){
    int hour, minutes;
    cout << "How many hours? ";
    cin >> hour;
    cout << endl << "How many minutes? ";
    cin >> minutes;
    c_time(hour, minutes);

    return 0;
}
