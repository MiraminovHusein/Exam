#include <bits/stdc++.h>

using namespace std;
string CheckTrueFalse(int a, int b)
{
    string True,False;

    if(a > 0 && b > 0)
    {
        return "True";
    }
    else
    {
      return "False";
    }

}
int main(){

    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;

    cout<<"Your numbers is: "<<CheckTrueFalse(a,b)<<endl;
    main();
}
