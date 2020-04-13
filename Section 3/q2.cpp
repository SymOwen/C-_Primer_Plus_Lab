#include <iostream>
#include <math.h>
using namespace std;
int main() {
    cout << "Please input your height ______m\b\b\b\b\b\b\b";
    int m;
    cin >> m;
    cout << "Please input your height ______cm\b\b\b\b\b\b\b\b";
    int cm;
    cin >> cm;
    cout << "Please input your weight ______kg\b\b\b\b\b\b\b\b";
    double kg;
    cin >> kg;
    double bmi = kg / pow(( double )m + ( double )cm / 100, 2.0);
    cout << "Your BMI is about " << bmi << endl;
}