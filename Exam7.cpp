#include <bits/stdc++.h>

using namespace std;

double Calculator(int a, char symbol, int b)
{
    if(symbol == '+') return a + b;
    if(symbol == '-') return a - b;
    if(symbol == '*') return a * b;
    if(symbol == '/') return a / b;
    if(symbol == '^') return pow((a),b);
}
int main(){

    int a,b;
    char symbol;

    cin>>a;
    cin>>symbol;
    cin>>b;

    cout<<Calculator(a,symbol,b)<<endl;
    main();
}
