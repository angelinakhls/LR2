#include <iostream>
using namespace std;
int main () {
    cout << " Select function: 2x, x^3, x/3" << endl;
    int n, x;
    float y;
    cin >> n;
    cout << "Enter your serial number in the journal: " <<endl;
    cin >> x;
    switch(n) {
        case 1:
            y = 2 * x;
            cout << "With x = " << x << " equal function 2x meaning " << y;
            break;
        case 2:
            y = x * x * x;
            cout << "With x = " << x << " equal function x^3 meaning " << y;
            break;
        case 3:
            y = x / 3;
            cout << "With x = " << x << " equal function x/3 meaning " << y;
            break;
    }
    return 0;
}
