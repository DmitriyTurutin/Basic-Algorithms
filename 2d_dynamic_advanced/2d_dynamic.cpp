#include <iostream> 


int main()
{
  int M, N;
  std::cin >> M >> N; 
  // memmory allocation
  int **A = new int* [N]; // выделяю память под массив указателей 
  A[0] = new int [N*M];
  for (int i = 1; i < M; ++i){
    A[i] = A[0] + M*i;
  }

  for (int i = 0; i < M; ++i){
    for (int j = 0; j < N; ++j){
      A[i][j] = i * N + j; // N = 3, M = 4 => при 1 --> 1 * 3 + 0 
    }
  }

  for (int i = 0; i < M; ++i){
    for (int j = 0; j < N; ++j){
      std::cout << A[i][j] << '\t'; 
    }
    std::cout << '\n';
  }

  // clear memmory

  delete [] A[0];
  delete [] A; 
 

  return 0;
}
