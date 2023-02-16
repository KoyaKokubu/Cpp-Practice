#include <iostream>
#include <string>

using namespace std;

int main() {
    string s,t;
    cout << "input text: ";
    cin >> s;
    t = "You entered ";
    cout <<t+s << "." << endl;

    string u;
    u = "this is a ";
    u.append("pen.");
    cout << u << endl;
    cout << "length of string: " << u.length() << endl;
    printf("char*:%s\n", u.c_str());

    return 0;
}