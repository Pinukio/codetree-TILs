#include <iostream>
using namespace std;

int main() {
    int arr[400];
    int cpy[400];
    int n, t;
    cin >> n >> t;
    int pivot = n*2-t;
    for(int i = 0; i < n*2; i++) {
        cin >> arr[i];
    }
    t %= (n*2);
    for(int i = 0; i < t; i++) {
        cpy[i] = arr[pivot+i];
    }
    for(int i = pivot-1; i >= 0; i--) {
        arr[i+t] = arr[i];
    }

    for(int i = 0; i < t; i++) {
        arr[i] = cpy[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = n; i < n*2; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}