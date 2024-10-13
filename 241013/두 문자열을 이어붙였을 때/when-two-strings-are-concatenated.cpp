#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if(A+B == B+A)
        cout << "true";
    else
        cout << "false";
    return 0;
}