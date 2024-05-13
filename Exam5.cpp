#include <bits/stdc++.h>

using namespace std;

string CheckDivision(int n,int m)
{
    string Yes, No;
    if(n % m == 0) return "Yes";
    else return "No";
}
int main(){

    int a,b;

    cout<<"Enter the number 1:";
    cin>>a;
    cout<<"Enter the number 2: ";
    cin>>b;

    cout<<CheckDivision(a,b)<<endl;
    main();
}
