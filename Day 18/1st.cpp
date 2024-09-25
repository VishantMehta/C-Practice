#include <iostream>
#include <tuple>
#include <string>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    Person(string fName, string lName, int a) : firstName(fName), lastName(lName), age(a) {}

    string getFullName() const {
        return firstName + " " + lastName;
    }

    tuple<string, string, int> getDetails() const {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person p("John", "Doe", 25);

    cout << "Full Name: " << p.getFullName() << endl;

    auto [fName, lName, age] = p.getDetails();
    
    cout << "First Name: " << fName << endl;
    cout << "Last Name: " << lName << endl;
    cout << "Age: " << age << endl;

    return 0;
}
