#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"I'm", "using", "a", "vector", "variable", "it's", "like", "an", "array"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

