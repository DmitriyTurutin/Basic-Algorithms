#include <iostream>

uint64_t factorial(uint64_t n)
{
  if (n == 1 or n == 0){
    return 1; 
  } else {
    return n*factorial(n-1);
  }
}

int main ()
{
  uint64_t n;
  std::cout << "Enter number to factorize!\n";
  std::cin >> n;
  clock_t startTime = clock();
  std::cout << "Your number is " << factorial(n);
  clock_t endTime = clock();
  std::cout << "\nTime took to execute: " << endTime - startTime;
  return 0;
}
