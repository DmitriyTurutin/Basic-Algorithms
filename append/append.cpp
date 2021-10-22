#include <iostream>

int main()
{
  int A[100];
  int top = 0;
  int counter;

  std::cin >> counter; 
  while (counter != 0){
    A[top++] = counter;
    std::cin >> counter;
  }
  for(int i = 0; i < top; ++i){
    std::cout << A[i] << '\t';
  }
}
