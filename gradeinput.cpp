#include <iostream>
using namespace std;

int main() {
    int grade;

    do {
        cout << "Enter your grade (0-100): ";
        cin >> grade;

        if (grade < 0 || grade > 100) {
            cout << "Invalid input. Please enter a grade between 0 and 100." << endl;
        }
    } while (grade < 0 || grade > 100);

    cout << "Valid grade entered: " << grade << endl;
    return 0;
}
