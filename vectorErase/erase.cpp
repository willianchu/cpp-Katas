#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void vectorErase(vector<int>&, int = 0, int = 0);
void vectorErase(vector<int>& arr, int k, int m) {
    if (m == 0 && k > 0){
      arr.erase(arr.begin() + k - 1);
    } else if (k > 0 && m > 0){
      arr.erase(arr.begin() + k - 1, arr.begin() + m - 1);
    }

}

int main() {
  int array_size; cin >> array_size;
  vector<int> arr(array_size); for (int i = 0; i < array_size; i++) cin >> arr[i];
  int k; cin >> k;
  vectorErase(arr, k);
  int m; cin >> k >> m;
  vectorErase(arr, k, m);
  for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

// Removes the element present at position.
// Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

// Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
// Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)

