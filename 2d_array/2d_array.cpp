#include <iostream> 

void print_array2d(int *p, int N, int M)
{
  for (int i = 0; i < M; ++i){
    for (int j = 0; j < N; ++j){
      std::cout << p[i*N + j] << '\t'; 
    }
    std::cout << '\n';
  }

}
int main()
{
  int M, N;
  std::cin >> M >> N; 
  int A[M][N];

  for (int i = 0; i < M; ++i){
    for (int j = 0; j < N; ++j){
      A[i][j] = i * N + j; // N = 3, M = 4 => при 1 --> 1 * 3 + 0 
    }
  }

  print_array2d(reinterpret_cast<int *>(A), N, M);

  return 0;
}
