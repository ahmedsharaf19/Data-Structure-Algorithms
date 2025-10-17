#include <iostream>
using namespace std;

int add(int a, int b);  // We Can remove name variable like this ->  int add(int , int);
int main(){
    int x = 10, y = 5, z;
    z = add(x, y);
    cout << "Sum = " << z << endl;
    return 0;
}

int add(int a, int b){
    return a + b;
}
