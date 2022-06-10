#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int *pointer_a = a;
    int *pointer_b = b;
    cout << "start" << endl;
    cout << pointer_a << endl;
    cout << *pointer_a << endl;
    cout << a << endl;
    cout << *a << endl;
    cout << &a << endl;
    cout << "end" << endl;

     return;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
