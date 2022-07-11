#include <iostream>

int fibonacci(int num) {
  if(num < 0) return 0;
  if(num <= 1) return num;
  return fibonacci(num - 2) + fibonacci(num - 1);
};


int main(){
  std::cout<<fibonacci(5)<<std::endl;
  return 0;
}


