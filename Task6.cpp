#include <iostream>
using namespace std;
int main() {
    int arr[10], search;
    cout << "Enter 10 Elements: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Enter Value to Search: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == search) {
            cout << "Value Found at Index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Value Not Found";

    return 0;
}
