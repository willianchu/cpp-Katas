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
    cout << endl; // first option using cout'
    printf("Second option using printf\n");
    printf("%s\n", msg[0].c_str()); // second option using printf

    char messageToPrint[] = "Supercalifragilisticexpialidocious";

    printf("%s\n", messageToPrint);

    printf(messageToPrint);
    printf("\n");




}

