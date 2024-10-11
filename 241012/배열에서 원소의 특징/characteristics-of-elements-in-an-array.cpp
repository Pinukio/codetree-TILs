#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int input, idx = 0;
    while(1) {
        cin >> input;
        if(input%3 == 0) {
            cout << arr[idx-1];
            return 0;
        }
        arr[idx++] = input;
    }
    return 0;
}