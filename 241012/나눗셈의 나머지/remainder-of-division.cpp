#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int a, b;
    cin >> a >> b;

    for(int i = 0; i < 10; i++) {
        arr[i] = 0;
    }

    while(a > 1) {
        arr[a%b]++;
        a /= b;
    }

    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += arr[i]*arr[i];
    }
    cout << sum;
    return 0;
}