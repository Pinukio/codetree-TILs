#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int input;

    for(int i = 0; i < 5; i++) {
        cin >> input;
        if(input%2 == 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}