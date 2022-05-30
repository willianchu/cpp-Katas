#include <iostream>
using namespace std;

int main (){
   int arr[] = { 2, 5, 7, 8, 2, 6, 9 };
   int size = sizeof(arr)/sizeof(arr[0]);
   cout << "Size of array is " << size << endl;
   int sum = 0;
   for(int i = 0; i< size ; i++){
      sum+=arr[i];
   }
   cout << "The array sum is " << sum << endl;
   return 0;
}
