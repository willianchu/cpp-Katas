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
  entireLine = entireLine.substr(1, entireLine.length()-2);
  string* lineArray = splitInArray(entireLine, ' ');
  // iterate through lineArray looking for '='
  int i = 0;
  while(i < lineArray[0].length()) {
    if(lineArray[0][i] == '=') {
      string attribute = lineArray[0].substr(0, i);
      string value = lineArray[0].substr(i+1);
      cout << attribute << " " << value << endl;
      break;
    }
    i++;
  }
  // print lineArray
  int size = sizeof(lineArray) / sizeof(lineArray[0]);
  for(int i = 0; i < size; i++) {
    cout << lineArray[i] << endl;
  }
    return 0;
}
