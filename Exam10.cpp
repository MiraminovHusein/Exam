#include <bits/stdc++.h>

using namespace std;

char CheckGrade(int grade)
{
    if(grade >= 90 && grade <= 100) return 'A';
    else if(grade >= 80 && grade <= 89) return 'B';
    else if(grade >= 70 && grade <= 79) return 'C';
    else if(grade >= 60 && grade <= 69) return 'D';
    else if(grade >= 0 && grade <= 59) return 'F';
}
int main(){

    int a;
    cin>>a;

    cout<<"Your grade is: "<<CheckGrade(a)<<endl;
    main();
}
