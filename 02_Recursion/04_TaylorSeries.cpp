#include <iostream>
using namespace std;

double taylor(int m, int n){
    static double p = 1, f = 1;
    double r;
    if (n == 0) return 1;
    else {
        r = taylor(m, n-1);
        p *= m;
        f *= n;
        return r+p/f;
    }
}

/* Horner's Rule*/
double e(int m, int n){
    static double s = 1;
    if (n == 0) return s;
    s = 1 + m * s / n;
    return e(m, n-1);
}

int main(){
    cout << "1 - " <<  taylor(4, 15) << endl;
    cout << "2 - " <<  e(4, 15) << endl;
}