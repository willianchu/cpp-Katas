#include <iostream>
#include <map>
// #include <unordered_map>
#include <string>

using namespace std;
int main()
{
  map<string, string> cDictionary;
  // unordered_map<string, string> cDictionary; // preserve order in LIFO
  cDictionary.insert(pair<string, string>("maverick", "Tom Cruise"));
  cDictionary.insert(pair<string, string>("titanic", "Leonardo Di Caprio"));
  cDictionary.insert(pair<string, string>("back to the future", "Michael J. Fox"));
  cDictionary.insert(pair<string, string>("matrix", "Keanu Reeves"));

  cDictionary["maverick"] = "Jennifer Gardener";
  // cDictionary.clear(); cDictionary.erase("maverick");
  cout << cDictionary.size()<<endl;
  for(auto pair : cDictionary) {
    cout << pair.first << " - " << pair.second << endl;
  }
  system("pause>0");
}
