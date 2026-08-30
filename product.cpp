#include <iostream>
using namespace std;

class Product
{
    int productId;
    string productName;
    float price;

public:
    void getData()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Product Price: ";
        cin >> price;
    }

    void displayData()
    {
        cout << "\nProduct Details:" << endl;
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Product Price: " << price << endl;
    }
};

int main()
{
    Product p1;

    p1.getData();
    p1.displayData();

    return 0;
}
