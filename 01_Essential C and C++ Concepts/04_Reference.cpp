#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a; // Must Initialize 

    cout << "a = " << a << endl;
    r++;
    cout << "r = " << r << endl;
    cout << "a = " << a << endl;

    int b = 30;
    r = b; // r = 30, not r alias to b
    b++;
    cout << "b = " << b << endl;
    cout << "r = " << r << endl;
    cout << "a = " << a << endl;
    return 0;
}