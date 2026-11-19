#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNumber;
    float GPA;

    for (int i = 1; i <= 3; i++) {
        cout << "\nStudent " << i << endl;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter GPA: ";
        cin >> GPA;

        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "GPA: " << GPA << endl;
    }

    return 0;
}
