#include <iostream>

int main() {
  auto f = [](auto a) {return [](auto b) {return a+b;};};

  std::cout << f(4)(5) << std::endl;
}
