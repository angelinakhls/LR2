#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the number x and y: ";
    cin >> x >> y;
    if ( x > y )  
        y = 0;
    if ( x < y )
        x = 0;
    else 
        x = y = 0;
    
    float a, b, c;
    cout << "enter number a, b, c: ";
    cin >> a >> b >> c;
    cout << "enter number k: ";
    int k;
    cin >> k;
    if ( a < b) {
        if ( b < c) {
            c -= k;
        }
        else if ( b > c)
            b -= k;
    }
    else if ( a > b) {
        if ( a > c)
            a -= k;
        if ( a < c)
            c -= k;
    }
    cout << " x: " << x << endl;
    cout << " y: " << y << endl;
    cout << " a: " << a << endl;
    cout << " b: " << b << endl;
    cout << " c: " << c << endl;
    return 0;
}