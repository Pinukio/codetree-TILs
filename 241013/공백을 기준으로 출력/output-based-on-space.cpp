#include <iostream>
using namespace std;

int main() {
    string result, input;
    while(cin.peek() != string::npos) {
        cin >> input;
        result += input;
    }
    cout << result;
    return 0;
}