#include <iostream>
#include <numeric>
using namespace std;

int main (){
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   int len = *(&arr + 1) - arr;
   int size = sizeof(arr) / sizeof(arr[0]);
   cout << "Size of array is " << size << endl;
   cout << "Len of array is " << len << endl;
   int sum = 0;
   for(int i = 0; i< size ; i++){
      sum+=arr[i];
   }
   cout << "The array sum with loop is " << sum << endl;

    sum = 0;
    sum = accumulate(arr, arr+len, sum);

   cout << "The array sum with accumulate is " << sum << endl;


   return 0;
}
