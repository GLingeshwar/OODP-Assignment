#include <iostream>
using namespace std;

class Account {
public:
    virtual void withdraw(float amount) {
        cout << "Base withdraw\n";
    }
};

class Savings : public Account {
    float balance = 1000;
public:
    void withdraw(float amount) {
        if (balance - amount >= 500)
            cout << "Savings Withdraw Success\n";
        else
            cout << "Minimum balance required\n";
    }
};

class Current : public Account {
    float balance = 1000;
public:
    void withdraw(float amount) {
        if (amount <= balance + 500)
            cout << "Current Withdraw with overdraft\n";
        else
            cout << "Overdraft limit exceeded\n";
    }
};

int main() {
    Account *acc;
    Savings s;
    Current c;

    acc = &s;
    acc->withdraw(600);

    acc = &c;
    acc->withdraw(1200);

    return 0;
}