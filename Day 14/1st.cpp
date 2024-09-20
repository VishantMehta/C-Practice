#include <iostream>
using namespace std;

class Car {
public:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

    void displayInfo() {
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car myCar;
    myCar.brandName = "Toyota";
    myCar.model = "Camry";
    myCar.engine = "V6";
    myCar.numberOfSeats = 5;

    myCar.displayInfo();

    return 0;
}
