#include<iostream>
using namespace std;

int c =45;

int main()
{
    //insertion Operator <<
    cout << "Bismillah\nEnter first number: ";
    int a, b, c;
    //extraction operator >>
    cin >> a;
    cout << "Enter secound number: ";
    cin >> b;
    //sunmation
    c = a +b;
    cout << "Sum of " << a << " and " << b << " is " << c << endl;
    cout << "The global c is " << ::c;

    return 0;
}

