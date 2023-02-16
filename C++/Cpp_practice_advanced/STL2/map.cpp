#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> score;
    map<string, int>::iterator itr;
    string names[] = {"Tom", "Jasmine"};

    score[names[0]] = 100;
    score[names[1]] = 120;

    for (itr=score.begin(); itr!=score.end(); itr++) {
    cout << itr->first << " : " << itr->second << endl;
    }
    cout << endl;

    cout << "size: " << score.size() << endl;
    cout << "empty: " << score.empty() << endl;
    for (int i=0; i<2; i++) {
        cout << names[i] << " : " << score[names[i]] << endl;
    }
    
    cout << "find(\"Jasmine\"): " << score.find("Jasmine")->second << endl;
    cout << "erase(\"Tom\")" << endl;
    itr = score.find("Tom");
    score.erase(itr);
    // for (int i=0; i<2; i++) {
    //     cout << names[i] << " : " << score[names[i]] << endl;
    // }
    cout << endl;
    for (itr=score.begin(); itr!=score.end(); itr++) {
        cout << itr->first << " : " << itr->second << endl;
    }
    cout << endl;

    cout << "clear" << endl;
    score.clear();
    // for (int i=0; i<2; i++) {
    //     cout << names[i] << " : " << score[names[i]] << endl;
    // }
    for (itr=score.begin(); itr!=score.end(); itr++) {
        cout << itr->first << " : " << itr->second << endl;
    }
    cout << "empty: " << score.empty() << endl;
    return 0;
}