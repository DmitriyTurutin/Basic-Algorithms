#include <iostream>

const int MAX_ARRAY_SIZE = 100000;
void merge_sort(double *array, int16_t array_size)
{
  if (array_size <= 1) return ; // base case
  
  int16_t middle = array_size / 2;
  double *left = array;
  double *right = array + middle;
  int16_t left_size = middle;
  int16_t right_size = array_size - left_size; 
  // recursion
  merge_sort(left, left_size);
  merge_sort(right, right_size);
  // merge two parts
  double *buffer = new double[array_size];
  int16_t left_i = 0;
  int16_t right_i = 0; 
  int16_t buffer_i = 0;
  
  while (left_i < left_size and right_i < right_size){
    if (left[left_i] <= right[right_i]) {
      buffer[buffer_i] = left[left_i];
      left_i += 1;
      buffer_i += 1;
    } else {
      buffer[buffer_i] = right[right_i];
      right_i += 1;
      buffer_i += 1;
    }
  }
  while (left_i < left_size){
    buffer[buffer_i] = left[left_i];
    left_i += 1; 
    buffer_i += 1;
  }
  while (right_i < right_size){
    buffer[buffer_i] = right[right_i];
    right_i += 1; 
    buffer_i += 1;
  }

  // copy from buffer to original array
  for (int16_t i = 0; i < array_size; ++i){
    array[i] = buffer[i];
  }
  delete[] buffer;
}

void input_array(double *A, int16_t n)
{
  for (int i = 0; i < n; ++i){
    std::cin >> A[i];
  } 
}

void print_array(double *A, int16_t n)
{
  for (int i = 0; i < n; ++i){
    std::cout << A[i] << ' '; 
  }
  std::cout << '\n';
}


int main()
{
  int16_t n;
  std::cout << "Enter size of an array: ";
  std::cin >> n; 
  if (n <= 0 or n > MAX_ARRAY_SIZE){
    std::cerr << "Value is not accaptable!\n";
    return 1;
  }
  double *A = new double[n];

  input_array(A, n);
  merge_sort(A, n);
  print_array(A, n);
  
  delete[] A;

  return 0;
}
