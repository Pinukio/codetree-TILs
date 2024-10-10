#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    string gen1, gen2;

    cin >> age1 >> gen1 >> age2 >> gen2;

    cout << ((age1 >= 19 && gen1 == "M") ||(age2 >= 19 && gen2 == "M"));
    return 0;
}