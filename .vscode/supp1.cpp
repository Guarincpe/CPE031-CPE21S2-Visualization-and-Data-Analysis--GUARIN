#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;

    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    cout << "\nBefore swapping: ";
    cout << num1 << " and " << num2;

    swapNumbers(num1, num2);

    cout << "\nAfter swapping: ";
    cout << num1 << " and " << num2;

    return 0;
}