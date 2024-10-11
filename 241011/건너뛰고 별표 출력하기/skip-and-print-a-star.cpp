#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 1;
    bool reverse = false;
    cin >> n;
    while(cnt > 0) {
        for(int i = 0; i < cnt; i++)
            cout << '*';
        cout << endl << endl;
        if(reverse)
            cnt--;
        else {
            if(cnt < n)
                cnt++;
            else {
                reverse = true;
                cnt--;
                }
        }
    }
    return 0;
}