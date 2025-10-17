#include <iostream>
using namespace std;

long fib(int n){
    if (n == 0 || n == 1) return n;
    return fib(n-1) + fib(n-2);
}

/* Memorization Fibonachi*/
static long F[10];
long fibV1(int n){
    if (n==0 || n==1) {
        F[n] = n;
        return n;
    }
    else {
        if (F[n-1] == -1) F[n-1] = fibV1(n-1);
        if (F[n-2] == -1) F[n-2] = fibV1(n-2);
        return F[n-1] + F[n-2]; 
    }
}

int main(){
    for (int i = 0; i < 10; i++) 
        F[i] = -1;
    
    cout << "Fib = " << fib(6) << endl;
    cout << "FibV1 = " << fibV1(6) << endl;
}