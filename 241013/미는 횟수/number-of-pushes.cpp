#include <iostream>
using namespace std;

int main() {
    string input, filter;
    int cnt=0;
    cin >> input >> filter;
    for(int i = 0; i < input.length(); i++) {
        if(input == filter) {
            cout << i;
            return 0;
        }
        input = input.substr(input.length()-1) + input.substr(0, input.length()-1);
    }
    return 0;
}