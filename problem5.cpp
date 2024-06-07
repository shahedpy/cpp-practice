#include <iostream>

using namespace std;

class Shape {
    public:
        void mPrint () {
            cout << "This is a shape" << endl;
        }
};

class Polygon:public Shape {
    public:
        void mPrint () {
            cout << "Polygon is a shape" << endl;
        }
};

class Rectangle:public Polygon {
    public:
        void mPrint () {
            cout << "Rectangle is a polygon" << endl;
        }
};

class Triangle:public Polygon {
    public:
        void mPrint () {
            cout << "Triangle is a polygon" << endl;
        }
};


class Square:public Rectangle {
    public:
        void mPrint () {
            cout << "Square is a rectangle" << endl;
        }
};



int main() {
    Shape s;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square sq;

    s.mPrint();
    p.mPrint();
    r.mPrint();
    t.mPrint();
    sq.mPrint();
    return 0;
}