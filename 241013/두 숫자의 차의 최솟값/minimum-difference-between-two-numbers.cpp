#include <iostream>
using namespace std;

int main() {
    int n, minDiff, diff;
    minDiff = diff = 0x7FFFFFFF;
    int arr[10];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        for(int j = i-1; j > 0; j--) {
            diff = arr[i]-arr[j];
            diff = (diff > 0) ? diff : -diff;
            if(diff < minDiff)
                minDiff = diff;
        }
    }
    cout << minDiff;
    return 0;
}