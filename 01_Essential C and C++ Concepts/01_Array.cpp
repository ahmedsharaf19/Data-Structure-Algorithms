#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    // Declartion
    int A[5];

    // Initialization
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    A[4] = 5;

    // Print Element in c++
    for(int i = 0; i < 5; i++)  
        cout << A[i] << " ";
    cout << endl;
    
    for (int i : A)
        cout << i << " ";
    cout << endl;

    // print Element in c

    for (int i = 0; i < 5; i++)
        printf("%d ", A[i]);
    printf("\n");


    // Decleartion And Initialization
    int B[] = {1, 2, 3, 4, 5};   // We Can write int B[5] = {1, 2, 3, 4, 5}
    for (int i : B){
        cout << i << " ";
    }
    cout << endl;
    // Delcalre Array Using Variable
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int C[n];  // We Can't Initialize  But Some Compiler Allow This

    for (int i = 0; i < 5; i++)
        printf("%d ", C[i]);  // Garbage Value
    printf("\n");

    return 0;
}