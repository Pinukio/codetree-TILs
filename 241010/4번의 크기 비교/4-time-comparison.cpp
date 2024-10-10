#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if(a > b)
        cout << 1;
    else
        cout << 0;
    cout << endl;

    if(a > c)
        cout << 1;
    else
        cout << 0;
    cout << endl;
    
    if(a > d)
        cout << 1;
    else
        cout << 0;
    cout << endl;

    if(a > e)
        cout << 1;
    else
        cout << 0;
    cout << endl;

    return 0;
}