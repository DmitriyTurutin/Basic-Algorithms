#include <iostream> 


int main()
{
    int N = 5;
    int A[N] = {1, 2, 3, 4, 5};

    for(int i = 0; i < N / 2; ++i){
        int tmp = A[i];
        A[i] = A[N - i -1];
        A[N - i - 1] = tmp;
    }
    for(int i = 0; i < N; ++i){
        std::cout << A[i];
    }
}
