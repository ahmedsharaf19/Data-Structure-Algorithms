#include <iostream>
#include <cstring>
using namespace std;

// Define Structure 

struct  Rectangel
{
    int length;
    int breadth;
};

struct  Complex
{
    int real;
    int img;
};

struct  Student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};

struct  Card
{
    int face;
    int shape;
    int color;
}c1, c2; // we can declare variable while define struct 



int main(){
    struct Rectangel r;
    r.length = 10;
    r.breadth = 5;
    cout << "Area Of Rectangle = " << r.length * r.breadth << endl;

    struct Student s;
    s.roll = 1;
    
    strcpy(s.name, "Ahmed");
    strcpy(s.dept, "CSE");
    strcpy(s.address, "Zagazig");

    cout << "Student Roll : " << s.roll << endl;
    cout << "Student Name : " << s.name << endl;
    cout << "Student Dept : " << s.dept << endl;
    cout << "Student Address : " << s.address << endl << endl;

    
    c1.face = 0;
    c1.shape = 1;
    c1.color = 0;

    struct  Card deck[3] = {{0, 1, 0}, {1, 1, 1}, {0, 0, 0}};
    for (int i = 0; i < 3 ; i++){
        cout << deck[i].face << " " << deck[i].shape << " " << deck[i].color << endl;
    }

    // we can access array of struct individual
    deck[0] = {0, 1, 0}; // or deck[0].face = 0; deck[0].shape = 1; deck[0].color = 0; 
    cout << deck[0].face << " " << deck[0].shape << " " << deck[0].color << endl;

    return 0;
}