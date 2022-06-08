#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int a, b, c;
    printf("Enter 3 numbers: ");
    while(true){
    scanf("%d %d %d", &a, &b, &c);
    if ( 1 < a,b,c < 1000) {
        if (a + b > c && a + c > b && b + c > a) {
            printf("%d\n", a + b + c);
            break;
        } else {
            printf("try again\n");
            continue;
        }
    }
    }

    }

    return 0;
}
