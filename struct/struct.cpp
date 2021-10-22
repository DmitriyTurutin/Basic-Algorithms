#include <iostream> 
// Чтобы заменить названия переменных в vim you should enter :%s/var/new_var 
int main(){
  struct human_t{ 
    int age;
    double height; 
    double weight;
  };
  human_t dima_turutin;
  dima_turutin.age = 18;
  printf("This Dima's age is: %d", dima_turutin.age);
}
