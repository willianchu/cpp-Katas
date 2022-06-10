#include<bits/stdc++.h>

using namespace std;

class Box { //Implement the class Box

private:
    int l, b, h; //l,b,h are integers representing the dimensions of the box

// The class should have the following functions :
public:
// Constructors:
    Box(){ // Box();
        l = b = h = 0;
    }
// Box(int,int,int);
    Box(int _l, int _b, int _h){
        l = _l; b = _b; h = _h;
    }
// Box(Box);
    Box(const Box& B){
        l = B.l; b = B.b; h = B.h;
    }
// int getLength(); // Return box's length
    int getLength(){
        return l;
    }
// int getBreadth (); // Return box's breadth
    int getBreadth(){
        return b;
    }
// int getHeight ();  //Return box's height
    int getHeight(){
        return h;
    }
// long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume(){
        return (long long)l * b * h;
    }
//Overload operator < as specified
//bool operator<(Box& b)
    bool Box operator<(Box& B){
        if( A.CalculateVolume() < B.CalculateVolume()) {
            return true;
        } else {
            return false;
        }
    };

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
};
