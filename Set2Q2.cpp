#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    
    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    
    int getMarks() {
        return marks;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];  

    
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].getData();
    }

    
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += s[i].getMarks();
    }

    float average = (float)total / n;

    cout << "\nClass Average: " << average << endl;

    
    cout << "\nStudents scoring above average:\n";
    for (int i = 0; i < n; i++) {
        if (s[i].getMarks() > average) {
            s[i].display();
        }
    }

    return 0;
}