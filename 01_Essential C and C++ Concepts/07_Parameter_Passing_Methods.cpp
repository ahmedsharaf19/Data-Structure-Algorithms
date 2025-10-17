#include <iostream>
using namespace std;

void swap_value(int a, int b); // pass by value
void swap_address(int *a, int *b); // pass by address
void swap_reference(int &a, int &b); // pass by reference
void increement_mix (int a, int &b, int *z);


int main(){
    int x= 10, y = 5;
    swap_value(x, y); // call by value
    cout << "x = " << x << " " << "y = " << y << endl;
    swap_address(&x, &y); // call by address
    cout << "x = " << x << " " << "y = " << y << endl;
    swap_reference(x, y); // call by reference
    cout << "x = " << x << " " << "y = " << y << endl;

    int c = 1, d = 1, g = 1;
    increement_mix(c, d, &g); // call mixed
    cout << "c = " << c << " " << "d = " << d << " " << "g = " << g << endl;
    return 0;
}

void swap_value(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_address(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_reference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void increement_mix (int a, int &b, int *z){
    a++;
    b++;
    (*z)++;
}