/*
  a function that simply sum all the elements in an array
*/

int arrayIntegers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int sumArray(int array[]) {
  int sum  = 0;
  int size = sizeof(array);
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return sum;
}

cout << sumArray(arrayIntegers);

