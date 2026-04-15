#include <iostream>
using namespace std;

class Demo {
private:
    int normalVar;          
    static int staticVar;   

public:
    
    Demo() {
        normalVar = 0;
        staticVar++;
    }

    
    void setValues(int n) {
        normalVar = n;
    }

    
    void display() {
        cout << "Normal Variable: " << normalVar << endl;
        cout << "Static Variable: " << staticVar << endl;
    }
};


int Demo::staticVar = 0;

int main() {
    Demo obj1, obj2, obj3;

    obj1.setValues(10);
    obj2.setValues(20);
    obj3.setValues(30);

    cout << "\nObject 1:\n";
    obj1.display();

    cout << "\nObject 2:\n";
    obj2.display();

    cout << "\nObject 3:\n";
    obj3.display();

    return 0;
}