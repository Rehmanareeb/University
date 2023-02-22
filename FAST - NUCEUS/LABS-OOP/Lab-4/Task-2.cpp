

#include <iostream>
using namespace std;

class Accounts
{
    int balance;
    int add_money;
    int subtract_money;
    int result_money;

public:
    int credit(int add, int remaining_balance)
    {
        balance = remaining_balance;
        add_money = add;
        return add_money, balance;
    }
    int debit(int give, int balance)
    {
        subtract_money = give;
        balance = balance - give;
        return balance;
    }

    Accounts(int add_money, int remaining_balance, int take_money)
    {
        credit(add_money, remaining_balance);

        debit(take_money, remaining_balance);
    }

    void display()
    {
        cout << "You Added: " << add_money << endl;
        cout << "You Took: " << subtract_money << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main()
{
    int balance, add_money, give_money;

    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter new money: ";
    cin >> add_money;
    cout << "How much money you need: ";
    cin >> give_money;

    Accounts customer(add_money, balance, give_money);
    customer.display();

    return 0;
}