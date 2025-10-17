#include <iostream>
#include <stdlib.h>

using namespace std;

void func(int A[], int n){  // or int *A
    int i;
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}

int* create_array(int n){
    int *p;
    p = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        p[i] = i + 1;
    }
    return p;
}


int main(){
    int A[4] = {1, 2, 3, 4};
    func(A, 4);

    int *q;
    q = create_array(4);
    for (int i = 0; i < 4 ; i++)
        cout << q[i] << " ";

    cout << endl;

    return 0;
}


// int A[] -> Pointer to an array
// int *A  -> Pointer to int
