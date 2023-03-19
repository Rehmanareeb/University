// Making a checkout system for a store

#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

class product {
  string name;
  int barcode;

public:
  product(string name = " ", int barcode = 0) : name(name), barcode(barcode){};
  void scanner();
  void printer();
};
void product::scanner() {
  cout << "Enter the name of the product: " << endl;
  getline(cin, name);
  cout << "Enter the barcode of the product: " << endl;
  cin >> barcode;
  ;
}
void product::printer() {
  cout << "Name of the product: " << name << endl;
  cout << "Barcode of the product: " << barcode << endl;
}
class FreshFood : public product {
  string expiry_date;
  int price_per_kg;
  int quantity;

public:
  FreshFood(string expiry_date = " ", int price_per_kg = 0,int quantity=0): expiry_date(expiry_date), price_per_kg(price_per_kg),quantity(quantity){};
  void get_Price_per_kg_and_extra_info();
  void put_Price_per_kg_and_extra_info();
};
void FreshFood::get_Price_per_kg_and_extra_info() {
  cout << "Enter the price per kg of the product: " << endl;
  cin >> price_per_kg;
    cout << "Enter the quantity of the product: " << endl;
    cin >> quantity;
  cin.ignore();
  cout << "Enter the expiry date of the product: " << endl;
  getline(cin, expiry_date);
  
}
void FreshFood::put_Price_per_kg_and_extra_info() {
  cout << "Price of the product you bought is : " << price_per_kg*quantity<<"Rs." <<endl;

  cout << "Expiry date of the product: " << expiry_date <<".Be sure to use it before it expires"<< endl;
}
class Pre_packed_food : public product {
  int price_per_unit;
  int quantity;

public:
  Pre_packed_food(int price_per_unit = 0, int quantity = 0)
      : price_per_unit(price_per_unit), quantity(quantity){};
  void get_Price_per_unit_and_extra_info();
    void put_Price_per_unit_and_extra_info();
};
void Pre_packed_food::get_Price_per_unit_and_extra_info() {
  cout << "Enter the price per unit of the prepacked product: " << endl;
  cin >> price_per_unit;
  cin.ignore();
  cout << "Enter the quantity of the product: " << endl;
  cin >> quantity;
  cin.ignore();
}
void Pre_packed_food::put_Price_per_unit_and_extra_info() {
  cout << "Price of the product you bought is : " << price_per_unit*quantity<< "Rs."<<endl;
  cout<<"Do not forget to place it in a cool and dry place"<<endl;
}
int main()
{
    FreshFood meat;
    Pre_packed_food chips;
    meat.scanner();
    meat.get_Price_per_kg_and_extra_info();
    cout<<"Please wait while we scan your product"<<endl;
    sleep(2);
    cout<<"Your product has been scanned"<<endl;
    meat.put_Price_per_kg_and_extra_info();

    chips.scanner();
    chips.get_Price_per_unit_and_extra_info();
    cout<<"Please wait while we scan your product"<<endl;
    sleep(2);
    cout<<"Your product has been scanned"<<endl;
    chips.put_Price_per_unit_and_extra_info();
    return 0;
    


    
}