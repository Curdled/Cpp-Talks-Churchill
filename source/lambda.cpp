#include <iostream>

int main() {
  struct s{
    int x;
    int operator()(int a) {return a+x;};
    s(int a ):x(a){};
  } f(5);
  std::cout << f(1);
}
