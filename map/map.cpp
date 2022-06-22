#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
  map<string, string> cDictionary;
  cDictionary.insert(pair<string, string>("maverick", "Tom Cruise"));
  cDictionary.insert(pair<string, string>("titanic", "Leonardo Di Caprio"));
  cDictionary.insert(pair<string, string>("back to the future", "Michael J. Fox"));
  cDictionary.insert(pair<string, string>("matrix", "Keanu Reeves"));

  for(auto pair : cDictionary) {
    cout << pair.first << " - " << pair.second << endl;
  }
  system("pause>0");
}
