#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNo;

public:
    Student(string name, int age, int rollNo) {
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    }

    void displayDetails() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll Number: " << this->rollNo << endl;
    }
};

int main() {
    Student student1("John", 20, 101);
    student1.displayDetails();

    return 0;
}
