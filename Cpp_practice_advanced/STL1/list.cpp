#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> li;

    li.push_back(1);
    li.push_back(2);
    li.push_front(3);
    li.push_front(5);
    li.push_front(1);
    li.push_front(7);

    list<int>::iterator itr;
    itr = li.begin();
    itr++;
    li.insert(itr, 4);
    for (itr=li.begin(); itr!=li.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    itr=li.begin();
    cout << "size: " << li.size() << endl;
    li.erase(itr++);
    li.remove(*itr);
    li.remove(1);
    li.pop_front();
    cout << "size: " << li.size() << endl;
    for (itr=li.begin(); itr!=li.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
}