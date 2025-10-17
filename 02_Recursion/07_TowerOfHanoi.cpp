#include <iostream>
using namespace std;

void HOW(int n, int A, int B, int C){
    if (n > 0){
        HOW(n-1, A, C, B);
        cout << "From " << A << " TO " << C << endl;
        HOW(n-1, B, A, C);
    }
}

int main(){
    int n;
    cout << "Enter Number Of Tower : ";
    cin >> n;
    HOW(n, 1, 2, 3);
    return 0;
}