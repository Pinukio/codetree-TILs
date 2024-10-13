#include <iostream>
using namespace std;

int main() {
    string input;
    int n = 0;
    int result = 0;
    for(int i = 0; i < 2; i++) {
        cin >> input;
        n = 0;
        for(int j = 0; j < input.length(); j++) {
            if(input[j] >= '0' && input[j] <= '9')
                n = n*10 + (input[j]-48);
        }
    result += n;
    }
    cout << result;
    return 0;
}