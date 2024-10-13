#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    for(int i = input.length(); i > 0; i--) {
        if(i%2 == 0)
            cout << input[i-1];
    }
    return 0;
}