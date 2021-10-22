#include <iostream>

int main(){
  int d;
  scanf("%d", &d);
  printf("Your number is: %d \n", d);
  int* dp = &d;
  printf("Your number's adress is: %p", dp);
}
