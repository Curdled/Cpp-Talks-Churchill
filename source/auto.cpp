#include <vector>

using std::vector;

void f(const vector<int>& v) {
    vector<int>::iterator i = v.begin(); // this is bad
}

int main() {
    auto v = vector<int>{2,3,4};
    v.push_back(2);
    f(v);
    return 0;

}
