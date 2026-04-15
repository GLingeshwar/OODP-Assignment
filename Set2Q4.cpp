#include <iostream>
using namespace std;

class Student {
private:
    int id;
    float marks;

public:
    void setData(int i, float m) {
        id = i;
        marks = m;
    }

    void display() {
        cout << "ID: " << id << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    
    Student *ptr = new Student[n];

    
    for (int i = 0; i < n; i++) {
        int id;
        float marks;
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> id;
        cout << "Marks: ";
        cin >> marks;

        (ptr + i)->setData(id, marks);   
    }

    
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        (ptr + i)->display();   // pointer arithmetic
    }

    
    delete[] ptr;

    return 0;
}