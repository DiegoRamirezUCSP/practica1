#include <iostream>

using namespace std;

int main()
{
    short int a= 2147483647;
    short int b= a+1;

    //int c;
    //int d;
    //int e;
    //int f = a+b+c+d+e;
    //cout << "el valor de a:" << endl;
    //cin >> a;
    //cout << "el valor de b:" << endl;
    //cin >> b;
    //cout << "el valor de c:" << endl;cin >> c;
    //cout << "el valor de d:" << endl;cin >> d;
    //cout << "el valor de e:" << endl;cin >> e;
    cout << b << endl;
    b = b + 2147483648;
    cout << b << endl;
    return 0;
}
