#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int count = n; // 구간의 길이가 1
    int sum = 0;
    bool isThere = false;

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            isThere = false;
            for(int k = i; k <= j; k++) {
                if(arr[k]*(j-i+1) == sum) { // arr*size == sum?
                    isThere = true;
                    break;
                }
            }

            if(isThere) count++;
        }
    }
    cout << count;
    return 0;
}