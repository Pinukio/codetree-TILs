#include <iostream>
using namespace std;

int main() {
    string result, input;
    int cnt = 0;
    while(cin.peek() != string::npos) {
        if(cin.peek() == '\n')
            cnt++;
        if(cnt == 2)
            break;
        cin >> input;
        result += input;
    }
    cout << result;
    return 0;
}