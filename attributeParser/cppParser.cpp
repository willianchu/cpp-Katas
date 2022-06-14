#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

string* splitInArray(string str, char delimiter) {
  string* array = new string[str.length()];
  int i = 0;
  int j = 0;
  while(i < str.length()) {
    if(str[i] == delimiter) {
      array[j] = str.substr(0, i);
      str = str.substr(i+1);
      j++;
    }
    i++;
  }
  return array;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  string entireLine; getline(cin, entireLine);
  string lineArray[100] = splitInArray(entireLine, ' ');

    return 0;
}
