#include <iostream>
using namespace std;

class Customer {
protected:
    string name;

public:
    void getCustomer() {
        cout << "Enter Customer Name: ";
        cin >> name;
    }
};

class Transaction {
protected:
    float amount;

public:
    void getTransaction() {
        cout << "Enter Transaction Amount: ";
        cin >> amount;
    }
};

class BankSystem : public Customer, public Transaction {
public:
    void display() {
        cout << "Customer: " << name << endl;
        cout << "Transaction Amount: " << amount << endl;
    }
};

int main() {
    BankSystem b;
    b.getCustomer();
    b.getTransaction();
    b.display();
    return 0;
}