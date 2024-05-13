#include <bits/stdc++.h>

using namespace std;

float AverageOfNumbers(int a, int b, int c, int d)
{
    return (a + b + c + d) / 4.0;
}
int main(){

    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    cout<<"Average of numbers is: "<<AverageOfNumbers(a,b,c,d)<<endl;
    main();
}
