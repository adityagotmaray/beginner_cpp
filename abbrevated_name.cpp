#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    for (int i = 0; i < name.length(); i++) {
        // cout << name.length();
        if (name[i] == ' ') {
            cout << ".";
        } else if (i==0 || name[i-1] == ' ') {
            cout << name[i];
        }
    }
    cout << endl;

    return 0;
}