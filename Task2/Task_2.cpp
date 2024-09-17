#include <iostream>
using namespace std;

int main() {
    cout << "Hello, enter the lengths of the sides of the triangle: ";
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    if ( x + y > z  &&  x + z > y  &&  y + z > x) 
        cout << "triangle exists";
    else 
        cout << "triangle doesn't exist ";
    return 0;
}