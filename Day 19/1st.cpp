#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName = "details.txt";

    ofstream outFile(fileName);
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    outFile << "Name: Vishant" << endl;
    outFile << "Age: 19" << endl;
    outFile << "University: Lovely Professional University" << endl;
    outFile << "Contact: 9306446854" << endl;

    outFile.close();

    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    string line;
    cout << "Details from file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
