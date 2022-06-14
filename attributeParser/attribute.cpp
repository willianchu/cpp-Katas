#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

string retrievePath(vector<string> stack) {
  string path = "";
  int size = stack.size();
  for(int i = 0; i < size; i++) {
    path += stack[i];
    if(i != size - 1) {
      path += ".";
    }
  }
  return path+"~";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q; cin >> N >> Q;
    map<string, string> Tree;
    vector <string> stack;
    string tag, attribute, value, path, entireLine;
    for(int i = 0; i <= N; i++){
      getline(cin, entireLine);
      int operation = 1; // tag 1 name / 2 attribute / 3 value
      for(int j = 1; j < entireLine.length(); j++){
        char c = entireLine[j];
        if(c == '\\'){
          stack.pop_back();
          break;
        }
        switch(operation){
          case 1:
            if(c ==' '){
              operation = 2;
              stack.push_back(tag);
              attribute = "";
            } else {
              tag += c;
            }
            break;
          case 2:
            if(c == ' ') break; // ignore space
            if(c == '='){
              operation = 3;
              value = "";
            } else {
              attribute += c;
            }
            break;
          case 3:
            if((c == ' ' && value == "") || (c == '"')) break; // ignore space and "
            if(c == ' ' || c == '>'){
              operation = 2;
              path = retrievePath(stack)+attribute;
              Tree[path] = value;
              attribute = "";
            } else {
              value += c;
            }
        }
      }
    }
        // print the dictionary
    for(auto it = Tree.begin(); it != Tree.end(); it++){
      cout << it->first << " " << it->second << endl;
    }
    return 0;
}
