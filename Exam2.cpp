#include <bits/stdc++.h>

using namespace std;

int FindMin(int a,int b, int c){

    if(a >= b && a <= c) {
        return a;
    }
    else if(b >= a && b <= c) {
        return b;
    }
    else if(c >= b && c <= a) {
        return c;
    }
    else if(a <= b && a >= c) {
        return a;
    }
    else if(b <= a && b >= c) {
        return b;
    }
    else if(c <= b && c >= a) {
        return c;
    }
}
int main(){

    int a,b,c;

    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    cout<<"Enter number 3: ";
    cin>>c;

    cout<<"The Min number: "<<FindMin(a,b,c)<<endl;
    main();
}
