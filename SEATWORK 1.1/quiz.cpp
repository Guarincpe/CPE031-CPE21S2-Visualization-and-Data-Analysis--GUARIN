#include <iostream>
using namespace std;

int main()
{
    string name;
    float quiz1, quiz2, quiz3, total, average;

    cout << "==================================" << endl;
    cout << "   QUIZ PERFORMANCE CALCULATOR" << endl;
    cout << "==================================" << endl;

    cout << "Student Name : ";
    getline(cin, name);

    cout << "Quiz 1 Score : ";
    cin >> quiz1;

    cout << "Quiz 2 Score : ";
    cin >> quiz2;

    cout << "Quiz 3 Score : ";
    cin >> quiz3;

    total = quiz1 + quiz2 + quiz3;
    average = total / 3;

    cout << "\n==================================" << endl;
    cout << "           RESULTS" << endl;
    cout << "==================================" << endl;
    cout << "Student      : " << name << endl;
    cout << "Total Score  : " << total << endl;
    cout << "Average      : " << average << endl;

    return 0;
}