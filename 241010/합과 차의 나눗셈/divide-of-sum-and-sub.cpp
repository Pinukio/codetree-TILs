#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    float result = (a+b)/(a-b);
    cout << fixed;
    cout.precision(2);
    cout << result;
    return 0;
}