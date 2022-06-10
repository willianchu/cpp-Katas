#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int length;
    scanf("%d", &length);
    int arr[length];
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < length; i++) {
        printf("%d ", arr[length - i -1]);
    }
    return 0;
}
