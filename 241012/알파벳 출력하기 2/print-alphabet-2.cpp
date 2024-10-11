#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int k = 0; k < n-i; k++) {
            cout << c++ << " ";
        }
        cout << endl;
    }
    return 0;
}