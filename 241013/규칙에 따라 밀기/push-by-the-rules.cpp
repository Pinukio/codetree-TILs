#include <iostream>
using namespace std;

int main() {
    int side = 0; // L: minus, R: plus
    string line1, line2;
    cin >> line1 >> line2;
    for(int i = 0; i < line2.length(); i++) {
        if(line2[i] == 'L')
            side--;
        else if(line2[i] == 'R')
            side++;
    }
    side %= (int)line1.length();
    if(side < 0) 
        line1 = line1.substr(-side) + line1.substr(0, -side);
    
    else 
        line1 = line1.substr(line1.length()-side, side) + line1.substr(0, line1.length()-side);
    
    cout << line1;
    return 0;
}