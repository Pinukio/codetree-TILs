#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 1;
    for(int i = 1; i <= b; i++) {
        if(i%a == 0)
            sum *= i;
    }
    cout << sum;
    return 0;
}