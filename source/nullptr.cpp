#include <iostream>

using std::cout;
using std::endl;

void func(int i) {
  cout << "func int" << endl;
}

void func(char* s) {
  cout << "func char*" << endl;
}

int main() {
  func(NULL);
}
