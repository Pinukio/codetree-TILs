#include <iostream>
using namespace std;

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);
    for(int i = 0; i < line1.length(); i++) {
        if(line1[i] != ' ')
            cout << line1[i];
    }
    for(int i = 0; i < line2.length(); i++) {
        if(line2[i] != ' ')
            cout << line2[i];
    }
    return 0;
}