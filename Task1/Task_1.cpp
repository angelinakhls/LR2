#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number x for the first example 23x^3+69x^2+32x+8: ";
    int x;
    cin >> x;
    double example = x*(23*x*x + 69*x + 32) + 8;
    cout << "Answer is: " << example << endl;
    cout << "Enter the number x for the second example -23x^3+69x^2-32x+8: ";
    cin >> x;
    example = x*(69*x - 23*x*x -32) + 8;
    cout << "Answer is: " << example;
    return 0;
}