#include <iostream>
using namespace std;

class Shape{
    public:
        string color;
        int GetArea() {
        
        }
};

class Rectangle: public Shape {
    public:
        int height;
        int width;
        int getArea() {
            int x = height;
            int y = width;
            return x * y;
        }
};

class Triangle: public Shape {
    public:
        int height;
        int base;
        int getArea() {
            int x = height;
            int y = base;
            return (x * y ) / 2;
        }
};

class Circle: public Shape {
    public:
        const double PI = 3.14;
        int getArea() {
            int r = radius;
            return r * r * 3.14;
        }
};

int main(){
    return 0; 
}