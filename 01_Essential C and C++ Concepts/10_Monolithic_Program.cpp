#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int length = 0, breadth = 0;
    printf("Enter Length And Breadth : ");
    scanf("%d%d", &length, &breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    return 0;
}