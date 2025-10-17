#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;

    cout << r.length << " " << r.breadth << endl;
    cout << p->length << " " << p->breadth << endl; 
    
    // in c++ we can declare struct with out typing struct keyword
    Rectangle r1 = {5, 1};
    Rectangle *q = &r;


    // Created Dynamic Object
    
    // 1 - Using C
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    free(p);

    // 2 - Using C++
    p = new Rectangle;
    p->length = 100;
    (*p).breadth = 50; // also we can access using dereference

    cout << "Area = " << p->length * p->breadth << endl;

    
    return 0;
}