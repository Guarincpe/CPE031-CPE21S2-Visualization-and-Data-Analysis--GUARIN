#include <iostream>
using namespace std;

int main()
{
    string item1, item2, item3;
    float price1, price2, price3;
    float total, payment, change;

    cout << "==================================" << endl;
    cout << "       CASHIERING SYSTEM" << endl;
    cout << "==================================" << endl;

    cout << "Item 1 Name  : ";
    cin >> item1;
    cout << "Item 1 Price : ";
    cin >> price1;

    cout << "\nItem 2 Name  : ";
    cin >> item2;
    cout << "Item 2 Price : ";
    cin >> price2;

    cout << "\nItem 3 Name  : ";
    cin >> item3;
    cout << "Item 3 Price : ";
    cin >> price3;

    total = price1 + price2 + price3;

    cout << "\nTotal Amount : " << total << endl;
    cout << "Payment      : ";
    cin >> payment;

    change = payment - total;

    cout << "\n==================================" << endl;
    cout << "            RECEIPT" << endl;
    cout << "==================================" << endl;
    cout << item1 << " : " << price1 << endl;
    cout << item2 << " : " << price2 << endl;
    cout << item3 << " : " << price3 << endl;
    cout << "----------------------------------" << endl;
    cout << "Total   : " << total << endl;
    cout << "Payment : " << payment << endl;
    cout << "Change  : " << change << endl;

    return 0;
}