#include <iostream>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int max = 0;
    int sum = 0;

    for(int i = 0; i < n-k+1; i++) { // k=1부터 생각하면 안 헷갈림
        sum = 0;
        for(int j = 0; j < k; j++) {
            sum += arr[i+j];
        }
        if(sum > max) max = sum;
    }
    cout << max;
    return 0;
}