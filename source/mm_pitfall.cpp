#include <memory>
#include <iostream>
#include <string>

using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::endl;
using std::string;

class C {
public:
  char* c;
  C(char i) {
    c = new char[6]{i,'f','g','h','t', '\0'};
  }
  ~C() {
    delete[] c;
  }
};

shared_ptr<C> g_p = make_shared<C>('c');

void g() {
  g_p = make_shared<C>('a');
}

void f( C& w ) {
  g();
  cout << w.c << endl;
}

int main() {
  f(*pin);
}
