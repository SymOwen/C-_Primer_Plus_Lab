#include <iostream>
using namespace std;
int main() {
    const int tran = 12;
    cout << "Enther the height:____________(in "
            "inch)\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    double height;
    cin >> height;
    cout << "Your height is " << height << " inch, which is about "
         << height * tran << "ft." << endl;
    return 0;
}