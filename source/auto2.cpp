#include <iostream>

int f(int i) {
  return i;
}
int main() {
  int i = f(1) * 42;
  int i2 = f(1) * 42.1;

  std::cout << i << std::endl;
  std::cout << i2 << std::endl;
}
