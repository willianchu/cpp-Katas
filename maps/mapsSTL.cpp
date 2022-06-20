#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int Q; cin >> Q; // number of queries
    map<string, int> mapOfStudents;
    while (Q--) {
        int operation, marks;
        string name; cin >> operation >> name;
        if (operation == 1) {
            cin >> marks; mapOfStudents[name] += marks;
        } else if (operation == 2) {
            mapOfStudents[name] = 0;
        } else if (operation == 3) {
            cout << mapOfStudents[name] << endl;
        }
    }
    return 0;
}
