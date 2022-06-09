#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  vector<int> result;
	string package = "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      package += str[i];
    } else if (package != "") {
        result.push_back(stoi(package));
        package = "";
      }

  }
  if (package != "") {
    result.push_back(stoi(package));
  }
  return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

// vector<int> parseInts(string str) {
// stringstream ss(str);   //??
// vector<int> result;
// char ch;
// int tmp;
// while(ss >> tmp) {      //??
//     result.push_back(tmp);
//     ss >> ch;           //??
// }
// return result;


// vector<int> parseInts(string str)
// {
//     vector<int> vec;    // Declares a vector to store the ints
//     stringstream ss(str);   // Declares a stringstream object to deal with the modification of the string
//     char ch;
//     int temp;

//     while(ss)   // While the stringstream object does not hit a null byte
//     {
//         ss>>temp>>ch;   // Extract the comma seperated ints with the extraction >> operator
//         vec.push_back(temp);   // Push the int onto the vector
//     }

//     return vec; // Return the vector of ints
// }


// third better
// stringstream ss(str);
// vector<int> v;
// for(int i=0; ss>>i; ss.ignore())
//     v.push_back(i)
// return v
