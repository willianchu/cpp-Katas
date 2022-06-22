#include <iostream>
#include <map>
// #include <unordered_map>
#include <string>
#include <list>

using namespace std;
int main()
{
  // complex dictionary
  map<string, list<string>> airDex;

  list<string>
    tomCat{"two engines", "variable wings", "two tails", "single radar"},
    hornet{"two engines", "fixed wings", "two tails", "4 radars"},
    tiger{"one engine", "fixed wings", "one tail", "two radars"  };

    airDex.insert(pair<string, list<string>>("F14", tomCat));
    airDex.insert(pair<string, list<string>>("F18", hornet));
    airDex.insert(pair<string, list<string>>("F5E", tiger));

    for(auto pair : airDex){
      cout << pair.first << " - ";

      for(auto spec : pair.second){
        cout << spec <<", ";
      }
      cout << endl;
    }

  // map<string, string> cDictionary;
  // // unordered_map<string, string> cDictionary; // preserve order in LIFO
  // cDictionary.insert(pair<string, string>("maverick", "Tom Cruise"));
  // cDictionary.insert(pair<string, string>("titanic", "Leonardo Di Caprio"));
  // cDictionary.insert(pair<string, string>("back to the future", "Michael J. Fox"));
  // cDictionary.insert(pair<string, string>("matrix", "Keanu Reeves"));

  // cDictionary["maverick"] = "Jennifer Gardener";
  // // cDictionary.clear(); cDictionary.erase("maverick");
  // cout << cDictionary.size()<<endl;
  // for(auto pair : cDictionary) {
  //   cout << pair.first << " - " << pair.second << endl;
  // }
  system("pause>0");
}
