#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    
    BankAccount() {
        balance = 0;
    }

    
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    
    void withdraw(float amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    float amount;

    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Enquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;

            case 3:
                acc.showBalance();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}