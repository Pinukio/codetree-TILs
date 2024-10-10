#include <iostream>
using namespace std;

int main() {
    int arr[3];
    int tmp;
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    for(int i = 2; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    cout << arr[1];
    return 0;
}