#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, a, j;
    scanf("%d %d", &n, &q);
    vector<int> variableLengthArrays[n];
    for (int i = 0; i < n; i++) { // each line i
      while(true) {
        scanf("%d", &a);
        variableLengthArrays[i].push_back(a);
        if(fgetc(stdin) == '\n'){
            break;
        }
      }
    }
    for (int i = 0; i < q; i++) {
      scanf("%d %d", &a, &j);
      printf("%d\n", variableLengthArrays[a][j+1]);
    }
    return 0;
}
