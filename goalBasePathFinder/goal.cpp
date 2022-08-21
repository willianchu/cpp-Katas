#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

const int BOUNDARY_X = 10;
const int BOUNDARY_y = 10;

void countStepsFrom(int x, int y){
  // go up

  // go down
  // left
  // right
  return;
}

int main()
{
	// vector<vector<int>> maze = {
  //   {1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
  //   {1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
  //   {1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
  //   {0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
  //   {1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
  //   {1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
  //   {1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
  //   {1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
  //   {1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }
  // };

 	// make a empty array 10x10 of int
  int plain[BOUNDARY_X][BOUNDARY_X];

	// pair<int, int> start = make_pair(0, 0);
	// pair<int, int> finish = make_pair(3, 4);

	pair<int, int> test = make_pair(4,4);

  cout << plain[0][0];
  countStepsFrom(test.first, test.second);

  return 0;
}
