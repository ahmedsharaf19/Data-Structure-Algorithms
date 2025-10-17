#include <iostream>
using namespace std;

int pow(int m , int n){
    if (n == 0) return 1;
    return m * pow(m, n-1);
}

int powFatser(int m, int n){
    if (n == 0) return 1;
    if (n % 2 == 0) return pow(m*m, n/2);
    return m * pow(m*m, (n-1) / 2);
}
int main(){
    int m, n;
    cout << "Enter Two Number : ";
    cin >> m >> n;
    cout << m << " power " << n << " = " << pow(m, n) << endl;
    cout << "Faster : \n";
    cout << m << " power " << n << " = " << powFatser(m, n) << endl;
    return 0;
}