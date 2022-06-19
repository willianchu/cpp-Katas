#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int Q; cin >> Q; // number of queries
    set<int> setOfNumbers;
    while (Q--) {
        int operation, number; cin >> operation >> number;
        if (operation == 1) {
            setOfNumbers.insert(number); // insert number into set
        } else if (operation == 2) {
            setOfNumbers.erase(number); // erase number from set
        } else if (operation == 3) {
            if (setOfNumbers.find(number) != setOfNumbers.end()){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }; // check if number is in set

        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}




