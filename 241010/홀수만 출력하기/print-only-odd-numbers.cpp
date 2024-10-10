#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int input;
    for(int i = 0; i < n; i++) {
        cin >> input;
        if(input%2 == 1 && input%3 == 0)
            cout << input << endl;
    }
    return 0;
}