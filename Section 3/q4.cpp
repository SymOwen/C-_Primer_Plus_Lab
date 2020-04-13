#include <iostream>
using namespace std;
int main() {
    cout << "Enther the number of seconds:";
    long sec;
    cin >> sec;
    int day = sec / (60 * 60 * 24);
    int hrs = (sec % (60 * 60 * 24)) / (60 * 60);
    int min = (sec % (60 * 60)) / 60;
    int secs = sec % 60;
    cout << sec << " seconds = " << day << " days, " << hrs << " hours, " << min
         << " minutes, " << secs << " seconds" << endl;
}