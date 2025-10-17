#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void increment_by_value(struct Rectangle r){
    r.length = 10;
    r.breadth = 5;
}

void increment_by_address(struct Rectangle *r){
    r->length = 10;
    r->breadth = 5;
}

void increment_by_reference(struct Rectangle &r){
    r.length = 10;
    r.breadth = 5;
}

struct Rectangle* creat(){
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 30;
    p->breadth = 50;
    return p;
}



int main(){ 
    struct Rectangle r1 = {1, 2};
    printf("Befor Calling Functions : \nlength = %d \t breadth = %d\n", r1.length, r1.breadth);
    increment_by_value(r1);
    printf("After Calling increment_by_value : \nlength = %d \t breadth = %d\n", r1.length, r1.breadth);
    increment_by_address(&r1);
    printf("After Calling increment_by_address : \nlength = %d \t breadth = %d\n", r1.length, r1.breadth);
    increment_by_reference(r1);
    printf("After Calling increment_by_reference : \nlength = %d \t breadth = %d\n", r1.length, r1.breadth);
   
    cout << endl;

    struct Rectangle *p;
    p = creat();

    printf("After Calling creat : \nlength = %d \t breadth = %d\n", p->length, p->breadth);

    return 0;
}