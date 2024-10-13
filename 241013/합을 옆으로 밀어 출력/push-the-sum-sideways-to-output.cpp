#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum=0, input;
    string result;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> input;
        sum += input;
    }
    result = to_string(sum);
    cout << result.substr(1) + result.substr(0, 1);
    return 0;
}