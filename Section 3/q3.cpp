#include <iostream>
using namespace std;
int main() {
    cout << "Enter a latitude in degree, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    int deg;
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    int min;
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    int sec;
    cin >> sec;
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = "
         << ( double )deg + ( double )min / 60 + ( double )sec / 3600
         << " degrees" << endl;
    return 0;
}