#include <iostream>

int main()
{
  int N = 5;

  int A[5] = {3, 5, 4, 7, 8};

  int i = 0;

  while (i < N -1){
    if (A[i] > A[i+1]){
      int tmp = A[i];
      A[i] = A[i+1];
      A[i+1] = tmp;
      i = 0;
    } else{
      i++;
    }
  }
  for(int i = 0; i < N; ++i){
    std::cout << A[i] << '\t';
  }
}
