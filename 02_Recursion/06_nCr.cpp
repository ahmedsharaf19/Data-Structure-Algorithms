#include <iostream>
using namespace std;

int C(int n, int r){
    if (r == 0 || n == r)
        return 1;

    return C(n-1, r-1) + C(n-1, r);
}
int main(){
    int n, r;
    cout << "Enter nCr (n, r): ";
    cin >> n >> r;
    cout << n << "C" << r << " = " << C(n, r) << endl;
    return 0;
}