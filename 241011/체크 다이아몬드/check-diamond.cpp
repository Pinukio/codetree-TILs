#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool reverse = false;
    int space = n-1;
    int star = 1;
    for(int i = 0; i < n*2+1; i++) {
        for(int j = 0; j < space; j++) {
            cout << ' ';
        }
        for(int k = 0; k < star; k++) {
            cout << "* ";
        }
        cout << endl;

        if(!reverse) {
            if(i == n-1) {
                reverse = true;
            }
            else {
                space--;
                star++;
            }
        }

        if(reverse) {
            space++;
            star--;
        }
    }
    return 0;
}