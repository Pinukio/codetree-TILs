#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    int mean = sum/3;
    cout << sum << endl << mean << endl << sum-mean;
    return 0;
}