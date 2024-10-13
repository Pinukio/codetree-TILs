#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    const char filter = input[1];
    for(int i = 1; i < input.length(); i++) {
        if(input[i] == filter)
            input[i] = input[0];
    }
    cout << input;
    return 0;
}