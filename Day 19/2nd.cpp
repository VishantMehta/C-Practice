#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName = "sample.txt";
    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string line;
    cout << "Contents of the file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
