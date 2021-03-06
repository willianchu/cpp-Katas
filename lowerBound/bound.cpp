#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> arr(N); for (int i = 0; i < N; i++) cin >> arr[i];
    int Q; cin >> Q;
    for (int i = 0; i < Q; i++) {
        int value; cin >> value;
        int low = lower_bound(arr.begin(), arr.end(), value) - arr.begin();
        int high = upper_bound(arr.begin(), arr.end(), value) - arr.begin();
        string answer = low == high ? "No " : "Yes ";
        cout << answer << low + 1 << endl;
    }

    return 0;
}
