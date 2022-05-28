#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solveMeFirst(int a, int b) {
 // Hint: Type return a+b; below:
  return a+b;
}

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

    int number1, number2;
    int sum, sum_Function;

    cout << "Enter two numbers: ";
    cin>>number1>>number2;

    sum = number1 + number2;
    printf("%d\n", sum);
    sum_Function = solveMeFirst(number1, number2);
    printf("%d\n", sum_Function);
    return 0; // return 0 to the operating system


}

