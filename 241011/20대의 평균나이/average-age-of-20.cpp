#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int input;
    int cnt = 0;
    while(1) {
        cin >> input;
        if(input >= 30)
            break;
        sum += input;
        cnt++;
    }
    float avg = (float)sum/cnt;
    cout << fixed;
    cout.precision(2);
    cout << avg;
    return 0;
}