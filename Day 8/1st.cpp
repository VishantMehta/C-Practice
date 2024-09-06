#include <iostream>
#include <string>
using namespace std;
int stringLength(string&str){
    return str.length();
}
int main(){
    string str1;
    cout << "Enter a string";
    getline(cin,str1);
    cout<<"Length of \""<<str1 <<"\" is: "<<stringLength(str1)<<endl;
}