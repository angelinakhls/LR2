#include <iostream>
using namespace std;

int main()
{
    int n;
    long double s, q, b;
    cin >> b;
    cout << "enter n, where n is your number in list of classmates ";
    cin >> n;
    q = (long double)1/(1+n);
    s =  b / (1 - q);
    cout << s;
    return 0;
}