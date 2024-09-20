#include <iostream>
using namespace std;

int main() {
    int* dynamicInt = new int;
    *dynamicInt = 42;
    
    cout << "The value of the dynamic variable is: " << *dynamicInt << endl;
    
    delete dynamicInt;

    return 0;
}
