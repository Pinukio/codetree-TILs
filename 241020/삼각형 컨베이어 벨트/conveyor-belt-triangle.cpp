#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    int arr[600];
    vector<int> cpy;
    cin >> n >> t;
    t %= (n*3);
    int pivot = n*3 - t;
    for(int i = 0; i < n*3; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < t; i++) {
        cpy.push_back(arr[pivot+i]);
    }
    for(int i = pivot-1; i >= 0; i--) {
        arr[t+i] = arr[i];
    }
    for(int i = 0; i < t; i++) {
        arr[i] = cpy[i];
    }
    for(int i = 0; i < n*3; i++) {
        cout << arr[i] << " ";
        if((i+1)%n == 0)
            cout << endl;
    }
    return 0;
}