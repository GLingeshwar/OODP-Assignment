#include <iostream>
using namespace std;

class Account {
protected:
    int accNo;
    string name;
    float balance;

public:
    void getData() {
        cout << "Enter Account No: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;
    }
};

class Savings : public Account {
public:
    void calculateInterest() {
        float interest = balance * 0.04;
        cout << "Savings Interest: " << interest << endl;
    }
};

class Current : public Account {
public:
    void calculateInterest() {
        cout << "Current Account has no interest\n";
    }
};

int main() {
    Savings s;
    Current c;

    cout << "\nSavings Account:\n";
    s.getData();
    s.calculateInterest();

    cout << "\nCurrent Account:\n";
    c.getData();
    c.calculateInterest();

    return 0;
}