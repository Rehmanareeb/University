#include <iostream>
using namespace std;
class Invoice
{
public:
    string part_number;
    string part_description;
    int item_purchased;
    double price_per_item;
    Invoice()
    {
        part_number = "5k10";
        part_description = "Hammer";
        item_purchased = 50;
        price_per_item = 500;
    }
    int getInvoiceAmmount(int a)
    {

        double d = price_per_item * item_purchased;
        return d;
    }
};
int main()
{
    Invoice l;
    int a;
    cout << l.getInvoiceAmmount(a);
}