#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle {
    public:
    int sideA, sideB;
    public:
    void read_input (){
        int x,y; cin >> x >> y;
        sideA = x;
        sideB = y;
    };
    void display() {
        std::cout << sideA << " "<< sideB << endl;
    }

};
class RectangleArea : public Rectangle {
    public:
    void display() {
        int area = sideA * sideB;
        cout << area << endl;
    }
};
