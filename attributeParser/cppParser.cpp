#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int N, Q;
  N = 12;
  Q = 8;
  vector<int> num = {1, 2, 3, 4, 5};
  vector<string> A {
  '    <tag1 value = "HelloWorld">',
  '	<tag2 name = "Name1">',
  '		<tag3 name = "Name3">',
  '		</tag3>',
  '		<tag4 name = "Name4" text = "Super">',
  '			<tag6 buzz = "Buzz6">',
  '			</tag6>',
  '		</tag4>',
  '		<tag5>',
  '		</tag5>',
  '	</tag2>',
  '</tag1>'
  };
  vector<string> B(N) = {
    "tag1.tag2~name",
    "tag1~name",
    "tag1~value",
    "tag1.tag2.tag3~name",
    "tag1.tag2.tag3~value",
    "tag1.tag2.tag4~text",
    "tag1.tag2.tag4.tag6~text",
    "tag1.tag2.tag4.tag6~buzz"
  }
  // cin >> N >> Q;
  vector<string> stack;
  string tag, element,value;
  map<string, string> tree;
  for(int i = 0; i < N + 1; i++) {
    // string entireLine; getline(cin, entireLine);
    string entireLine = A[i];
    int numOfCharacters = entireLine.length();
    int getElement = 0;
    for (int j = 0; j < numOfCharacters; j++) {
      switch(getElement){
        case 0:
          if(entireLine[j] == ' ') {
            continue;
          }
          if(entireLine[j] == '<') {
            getElement = 1;
            tag = "";
          }
          break;
        case 1:
          if(entireLine[j] == '\\') {
            stack.pop_back();
            j = numOfCharacters;
            continue;
          }
          if(entireLine[j] == ' ' && tag == "") {
            continue;
          } else if(entireLine[j] == ' ') {
            getElement = 2;
            stack.push_back(tag);
            tag = "";
            element = "";
            continue;
          } else {
            tag += entireLine[j];
          }
          break;
        case 2:
          if(entireLine[j] == ' ') {
            continue;
          } else if (entireLine[j] == '=') {
            getElement = 3;
            value = "";
            continue;
          } else {
            element += entireLine[j];
          }
          break;
        case 3:
          if((entireLine[j] == ' ' && value == "") || entireLine[j] == '"') {
            continue;
          } else if (entireLine[j] == '>' || entireLine[j] == ' ') {
            string key = "";
            for(int k = 0; k < stack.size(); k++) {
              key += key == "" ? stack[k] : "." + stack[k];
            }
            key += '~' + element;

            tree[key] = value;
            getElement = 2;
            element = "";
          } else {
            value += entireLine[j];
          }
          break;

      }
    }

  }
  cout << "tree: " << endl;
  // print the tree
  for( map<string,string>::iterator i=tree.begin(); i!=tree.end(); ++i)
    {
    cout << (*i).first <<  " = " << (*i).second << endl;
    }
  for(int i = 0; i < Q; i++) {
    // string query; getline(cin, query);
    string query = B[i];
    if(tree[query] == "") {
      cout << "Not Found!" << endl;
    } else {
      cout << tree[query] << endl;
    }
  }
    return 0;
}
