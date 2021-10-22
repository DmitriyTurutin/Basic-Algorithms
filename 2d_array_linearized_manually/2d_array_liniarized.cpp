#include <iostream> 

void print_array2d(int *A, int N, int M)
{
  for (int i = 0; i < M; ++i){
    for (int j = 0; j < N; ++j){
      std::cout << A[i*N + j] << '\t'; 
    }
    std::cout << '\n';
  }

}
int main()
{
  int M, N;
  std::cin >> M >> N; 
  int A[M*N];

  for (int i = 0; i < M; ++i){
    for (int j = 0; j < N; ++j){
      A[i*N + j] = i * N + j;
    }
  }

  print_array2d(A, N, M);

  return 0;
}
