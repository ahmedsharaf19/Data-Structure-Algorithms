#include <iostream>
using namespace std;

int sum(int n){
    if (n <= 1) return 1;
    
    return n + sum(n-1);
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << "Sum Of " << n << " : " << sum(n) << endl;
    return 0;
}

/*
    Formula = (n * ( n + 1 )) / 2
*/