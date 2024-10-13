#include <iostream>
using namespace std;

#define SIZE 4

int main() {
    int input, sum=0;
    int arr[SIZE][SIZE];
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j <= i; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}