#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    int idx = input.find('e');
    input.erase(idx, 1);
    cout << input;
    return 0;
}