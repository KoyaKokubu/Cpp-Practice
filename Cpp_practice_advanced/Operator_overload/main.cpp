#include <iostream>
#include "vector2.h"

using namespace std;

void vec(string, Vector2);

int main() {
    Vector2 v1, v2, v3;
    
    v1.x = 1.0;
    v1.y = 2.0;
    v2 = v1;
    v3 = 4.0 * v1;
    vec("v1 = ", v1);
    vec("v2 = ", v2);
    Vector2 v = v1+v2;
    // Vector2& v = v1+v2;
    cout << typeid(v).name() << endl;
    cout << typeid(v1+v2).name() << endl;
    cout << "(" << (v1+v2).x << ", " << (v1+v2).y << ")" << endl;
    vec("v1 + v2 = ", v);
    vec("v1 + v2 = ", v1+v2);
    vec("v3 = ", v3);
    v3 += v1;
    vec("v3 = ", v3);
    v1 -= v2;
    vec("v1 = ", v1);
    return 0;
}

// void vec(string vecname, Vector2& v) {
void vec(string vecname, Vector2 v) {
    cout << vecname << "(" << v.x << ", " << v.y << ")" << endl;
}