#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int input;
    for(int i = 0; i < n; i++) {
        cin >> input;
        if(input%3 == 0)
            cout << input << endl;
    }
    return 0;
}