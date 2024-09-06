#include <iostream>
using namespace std;
// define ll long long
int main(){
    float a,b,c,d,e;
    cout<<"Enter grade 1: ";
    cin>>a;
    cout<<"Enter grade 2: ";
    cin>>b;
    cout<<"Enter grade 3: ";
    cin>>c;
    cout<<"Enter grade 4: ";
    cin>>d;
    cout<<"Enter grade 5: ";
    cin>>e;
    // >b>>c>>d>>e;
    float avg = ((a+b+c+d+e)/5.0);
    cout<<avg<<endl;
}