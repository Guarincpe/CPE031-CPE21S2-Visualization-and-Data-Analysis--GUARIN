#include <iostream>
#include <string>
using namespace std;

class Fruit
{

private:
    string name;
    int price;
    int quantity;

public:
    Fruit(string n, int p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    Fruit(const Fruit &f)
    {
        name = f.name;
        price = f.price;
        quantity = f.quantity;
    }

    Fruit &operator=(const Fruit &f)
    {

        if (this != &f)
        {
            name = f.name;
            price = f.price;
            quantity = f.quantity;
        }

        return *this;
    }

    ~Fruit()
    {
        cout << name << " object deleted." << endl;
    }

    int calculateSum()
    {
        return price * quantity;
    }

    void display()
    {

        cout << "Fruit" << endl;
        cout << "Name: " << name << endl;
        cout << "Price: PHP " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: PHP " << calculateSum() << endl;
        cout << endl;
    }
};

class Vegetable
{

private:
    string name;
    int price;
    int quantity;

public:
    Vegetable(string n, int p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    Vegetable(const Vegetable &v)
    {
        name = v.name;
        price = v.price;
        quantity = v.quantity;
    }

    Vegetable &operator=(const Vegetable &v)
    {

        if (this != &v)
        {
            name = v.name;
            price = v.price;
            quantity = v.quantity;
        }

        return *this;
    }

    ~Vegetable()
    {
        cout << name << " object deleted." << endl;
    }

    int calculateSum()
    {
        return price * quantity;
    }

    void display()
    {

        cout << "Vegetable" << endl;
        cout << "Name: " << name << endl;
        cout << "Price: PHP " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: PHP " << calculateSum() << endl;
        cout << endl;
    }
};

int TotalSum(Fruit *fruitList[], int fruitSize,
             Vegetable *vegetableList[], int vegetableSize)
{

    int total = 0;

    for (int i = 0; i < fruitSize; i++)
    {
        total += fruitList[i]->calculateSum();
    }

    for (int i = 0; i < vegetableSize; i++)
    {
        total += vegetableList[i]->calculateSum();
    }

    return total;
}

int main()
{

    Fruit *GroceryListFruit[2];

    Vegetable *GroceryListVegetable[2];

    GroceryListFruit[0] = new Fruit("Apple", 10, 7);
    GroceryListFruit[1] = new Fruit("Banana", 10, 8);

    GroceryListVegetable[0] = new Vegetable("Broccoli", 60, 12);
    GroceryListVegetable[1] = new Vegetable("Lettuce", 50, 10);

    cout << "Jenna's Grocery List" << endl;
    cout << "====================" << endl
         << endl;

    for (int i = 0; i < 2; i++)
    {
        GroceryListFruit[i]->display();
    }

    for (int i = 0; i < 2; i++)
    {
        GroceryListVegetable[i]->display();
    }

    cout << "Total Amount to Pay: PHP "
         << TotalSum(GroceryListFruit, 2,
                     GroceryListVegetable, 2)
         << endl;

    cout << endl;

    delete GroceryListVegetable[1];

    GroceryListVegetable[1] = nullptr;

    cout << "Lettuce has been removed from Grocery List." << endl;

    return 0;
}