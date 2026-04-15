#include <iostream>
using namespace std;

class BankService {
public:
    virtual void process() = 0; // pure virtual
};

class DepositService : public BankService {
public:
    void process() {
        cout << "Processing Deposit Service\n";
    }
};

class LoanService : public BankService {
public:
    void process() {
        cout << "Processing Loan Service\n";
    }
};

int main() {
    BankService *b;

    DepositService d;
    LoanService l;

    b = &d;
    b->process();

    b = &l;
    b->process();

    return 0;
}