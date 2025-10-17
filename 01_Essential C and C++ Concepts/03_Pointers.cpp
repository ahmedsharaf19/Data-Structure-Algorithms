#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;

    printf(" a = %d\n", a);
    printf(" *p = %d\n", *p);

    printf(" &a = %d\n", &a);
    printf(" p = %d\n", p);

    p = (int *)malloc(5*sizeof(int)); // dynamic memory location using c lang
    // we can access like array
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    for (int i = 0; i< 5; i++)  
        printf("%d ", p[i]); // or *(p+i)
    printf("\n");

    free(p); // deallocate using c lang
    

    p = new int[5]; // dynamic memory location using c++ lang
    delete []p; // deallocate using c lang

    int A[4]= {1, 2, 3, 4};
    int *q = A; // Name Of Array Is Address Of First Element in Array
    for (int i = 0; i < 4; i++)
        cout << q[i] << " "; // or *(q+i)
    cout << endl;

    
    return 0;
}   // when program end, the memory automatically deleted (heap, stack, code, ...)