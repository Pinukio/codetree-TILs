#include <iostream>
using namespace std;

int main() {
    int n, cnt=0, len=0;
    cin >> n;
    string input[20];
    char c;
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    cin >> c;
    
    for(int i = 0; i < n; i++) {
        if(input[i].front() == c) {
            cnt++;
            len += input[i].length();
        }
    }
    cout << cnt << " ";
    cout << fixed;
    cout.precision(2);
    cout << (float)len/cnt;
    return 0;
}