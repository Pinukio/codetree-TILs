#include <iostream>
using namespace std;

int main() {
    string phone;
    cin >> phone;
    string front = phone.substr(4, 4);
    string back = phone.substr(9, 4);
    cout << "010-" << back << "-" << front;
    return 0;
}