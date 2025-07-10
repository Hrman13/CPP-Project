#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    cout << "Enter marks for 5 subjects (out of 100):\n";

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (float)total / 5;

    // Grade calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Output
    cout << "\nTotal Marks = " << total << " / 500";
    cout << "\nPercentage  = " << percentage << "%";
    cout << "\nGrade       = " << grade << endl;

    return 0;
}
