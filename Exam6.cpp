#include <bits/stdc++.h>

using namespace std;

int FindMin(int a, int b, int c, int d)
{
    if(a <= b && a <= c && a <= d) return a;
    else if(b <= a && b <= c && b <= d) return b;
    else if(c <= a && c <= b && c <= d) return c;
    else if(d <= a && d <= b && d <= c) return d;
}
int main(){

    int a, b, c, d;

    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    cout<<"Enter number c: ";
    cin>>c;
    cout<<"Enter number d: ";
    cin>>d;

    cout<<"Minimum number is: "<<FindMin(a,b,c,d)<<endl;
    main();
}
