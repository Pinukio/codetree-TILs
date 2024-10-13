#include <iostream>
using namespace std;

int main() {
    string A, B;
    int cnt=0;
    cin >> A >> B;
    for(int i = 0; i < A.length()-B.length()+1; i++) {
        if(A.substr(i, B.length()) == B)
            cnt++;
    }
    cout << cnt;
    return 0;
}