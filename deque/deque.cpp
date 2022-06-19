#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){
	int maxValue;
    int z = n - k;
    int x;
    for(int i = 0; i < z + 1; i++){
        maxValue = 0;
        x = i + k;

        for(int l=i; l <x; l++){

            if(maxValue < arr[l]){
                maxValue = arr[l];
            }
        }
        cout << maxValue <<' ';
    }
    cout << endl;

}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
