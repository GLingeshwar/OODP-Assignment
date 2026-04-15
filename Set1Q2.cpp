#include <iostream>
using namespace std;

class Account {
protected:
    float principal;
};

class LoanAccount : public Account {
protected:
    float rate;
    int time;
};

class HomeLoan : public LoanAccount {
public:
    void getData() {
        cout << "Enter Principal: ";
        cin >> principal;
        cout << "Enter Rate: ";
        cin >> rate;
        cout << "Enter Time (months): ";
        cin >> time;
    }

    void calculateEMI() {
        float emi = (principal * rate * time) / 100;
        cout << "Simple EMI: " << emi / time << endl;
    }
};

int main() {
    HomeLoan h;
    h.getData();
    h.calculateEMI();
    return 0;
}