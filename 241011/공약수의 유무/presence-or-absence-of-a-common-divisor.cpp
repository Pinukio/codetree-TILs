#include <iostream>
using namespace std;

int main() {
    int a, b;
    //4, 12: 1, 2, 4
    //2^2 2^2*3
    //1920: 960*2 480*4 240*8 120*16 60*32 30*64 15*128 2^7 * 3 * 5
    //2880: 1440*2 720*4 360*8 180*2^4 90*2^5 45*2^6    2^6 * 3^2 * 5
    //2^6 * 3 * 5
    const int filter = 64*3*5;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(filter%i == 0) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}