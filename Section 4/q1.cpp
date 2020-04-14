#include <iostream>
#include <string>
using namespace std;
struct student {
    string fir_name;
    string last_name;
    char   grade;
    int    age;
};
int main() {
    struct student *stu = new struct student;
    cout << "What is your first name? ";
    getline(cin, stu->fir_name);
    cout << "What is your last name? ";
    cin >> stu->last_name;
    cout << "What letter grade do you deserve? ";
    cin >> stu->grade;
    cout << "What is your age? ";
    cin >> stu->age;
    cout << "Name: " << stu->last_name << ", " << stu->fir_name << endl;
    cout << "Grade: " << (char) (stu->grade + 1) << endl;
    cout << "Age: " << stu->age << endl;
    return 0;
}