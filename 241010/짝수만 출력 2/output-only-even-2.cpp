#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> b >> a;
    int i = b;
    while(i >= a) {
        if(i%2 == 0)
            cout << i << " ";
        i--;
    }
    return 0;
}