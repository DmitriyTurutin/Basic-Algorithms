#include <iostream>


int lef_bound(int A[], int N, int x)
{
  int left = -1; 
  int right = N; 
  while (right - left > 1){
    int middle = (right - left) / 2;
    if (A[middle] < x){
      left = middle;
    } else {
      right = middle;
    }
  }
  return left;
}

int main()
{
  int x; 
  std::cin >> x;
  
  return 0;
}
