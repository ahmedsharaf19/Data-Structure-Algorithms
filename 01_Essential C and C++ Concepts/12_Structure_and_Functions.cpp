#include <iostream>
#include <stdio.h>
using namespace std;
struct  Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}
int area(struct Rectangle r){
    return r.length * r.breadth;
}

int perimeter (Rectangle r){
    return 2*(r.length + r.breadth);
}

int main(){
    struct Rectangle r = {0, 0};
    int l, b;
    printf("Enter Length And Breadth : ");
    scanf("%d%d", &l, &b);
    initialize(&r, l, b);
    cout << "Area = " << area(r) << endl;
    cout << "Perimeter = " << perimeter(r) << endl;
    return 0;
}