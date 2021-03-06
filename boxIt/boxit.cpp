#include<bits/stdc++.h>

using namespace std;

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
        friend bool operator < (Box& b1, Box& b2)
        {
            if((b1.l < b2.l) || (b1.l == b2.l && b1.b < b2.b) ||
               (b1.l == b2.l && b1.b == b2.b && b1.h <b2.h))
                return(true);
            else
                return(false);
        }

        friend ostream& operator << (ostream& s,Box& b1)
        {
            s << b1.l << " " << b1.b << " " << b1.h;
            return s;
        }
};
//Overload operator < as specified
//bool operator<(Box& b)
    // bool operator<(Box& B){
    //     Box A;
    //     if( A.CalculateVolume() < B.CalculateVolume()) {
    //         return true;
    //     } else {
    //         return false;
    //     }
    // };

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
// };
//     ostream& operator<<(ostream& OUT, Box& B){
//         return OUT<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
//     };
    //Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
