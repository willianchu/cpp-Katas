#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPresent(vector<int> &v, int n) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == n) {
            return true;
        }
    }
    return false;
}
int main() {
    int N; cin >> N;
    vector<int> arr(N); for (int i = 0; i < N; i++) cin >> arr[i];
    int Q; cin >> Q;
    for (int i = 0; i < Q; i++) {
        int value; cin >> value;
        bool answer = isPresent(arr, value);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
