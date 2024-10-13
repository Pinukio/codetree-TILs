#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if(c == 'a')
        c = 'z';
    else
        c--;
    cout << c;
    return 0;
}