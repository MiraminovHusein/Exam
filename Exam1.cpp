#include <bits/stdc++.h>

using namespace std;

int Add(int a, int b) {
    return a + b;
}
int SubTract(int a, int b) {
    return a - b;
}
int Multiply(int a, int b) {
    return a * b;
}
int Division(int a, int b) {
    return a / b;
}
int main(){

    int a,b;

    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;

    cout<<Add(a,b)<<endl;
    cout<<SubTract(a,b)<<endl;
    cout<<Multiply(a,b)<<endl;
    cout<<Division(a,b)<<endl;
    main();
}
