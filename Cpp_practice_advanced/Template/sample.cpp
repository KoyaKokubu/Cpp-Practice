#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T x, T y) {
    return x+y;
}

int main() {
    cout << add<int>(4,3) << endl;
    cout << add<string>("ABC", "DEF") << endl;
    cout << add(1,2) << endl;
    // cout << add("abc", "def") << endl;
    // cout << add(1, 2.3) << endl;
    return 0;
}