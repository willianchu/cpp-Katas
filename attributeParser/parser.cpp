#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

string retrievePath(vector<string> stack) {
  string path = "";
  for(int i = 0; i < stack.size(); i++) {
    path += stack[i];
    if(i != stack.size() - 1) {
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
              path = retrievePath(stack);
            } else {
              value += c;
            }

        }
      }
    }



    return 0;
}
