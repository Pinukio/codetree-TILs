#include <iostream>
using namespace std;

int main() {
    int n, input, cnt=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> input;
        if(input == 2)
            cnt++;
        if(cnt == 3) {
            cout << i+1;
            return 0;
        }
    }
    return 0;
}