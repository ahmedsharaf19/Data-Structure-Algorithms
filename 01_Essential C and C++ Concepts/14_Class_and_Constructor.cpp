#include <iostream>
using namespace std;

class Rectangle{
    private :
        int length;
        int breadth;
    public :
        Rectangle(){
            length = 1;
            breadth = 1;
        }

        Rectangle(int l, int b);
        int area();
        int perimeter();
        int get_length(){
            return length;
        }
        int get_breadth(){
            return breadth;
        }

        void set_length(int l){
            length = l;
        }

        void set_breadth(int b){
            breadth = b;
        }

        ~Rectangle();
};

Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle::area(){
    return length * breadth;
}

int Rectangle::perimeter(){
    return 2*(length + breadth);
}

Rectangle::~Rectangle(){
    cout << "Destroyed";
}

int main(){
    Rectangle r;
    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    int l, b;
    cout << "Enter Length And Breadth : ";
    cin >> l >> b;
    r.set_length(l);
    r.set_breadth(b);

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
