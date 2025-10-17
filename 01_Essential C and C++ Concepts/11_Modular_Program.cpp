#include <iostream>
#include <stdio.h>
using namespace std;


int area(int length, int breadth){
    return length * breadth;
}

int perimeter (int length, int breadth){
    int p;
    p =  2*(length + breadth);
    return p;
}

int main(){
    int length = 0, breadth = 0;
    printf("Enter Length And Breadth : ");
    scanf("%d%d", &length, &breadth);

    cout << "Area = " << area(length, breadth) << endl;
    cout << "Perimeter = " << perimeter(length, breadth) << endl;
    return 0;
}