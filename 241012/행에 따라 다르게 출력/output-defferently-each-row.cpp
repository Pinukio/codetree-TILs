#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int add, sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i%2 == 0)
            add = 2;
        
        else 
            add = 1;
        
        for(int j = 0; j < n; j++) {
            sum += add;
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}