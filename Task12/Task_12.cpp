#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "what type of equation will we solve?:" << endl;
    cout << "1. ax^4 + bx^2 + c = 0" << endl;
    cout << "2. ax^4 + bx^3 + cx^2 + bx + a = 0" << endl;
    cout <<"3. x^3 + px + q = 0." << endl;
    int number, a, b, c;
    cin >> number;
    if (number == 1) {
        cout << "enter a b c for an equation of the form ax^4 + bx^2 + c = 0";
        cin >> a >> b >> c;
        float t1, t2, D, x1, x2, x_1, x_2;
        D = b*b - 4 * a * c;
        if ( D < 0) {
            cout << "No roots. Discriminant less than zero";
        }
        else {
            t1 = (( - b - (sqrt(D))) / (2 * a));
            t2 = (( - b + sqrt(D)) / (2 * a));
            cout << "t1 is " << t1 << " t2 is " << t2 << endl;
            x1 = sqrt(t1);
            x_1 = -sqrt(t1);
            x_2 = -(sqrt(t2));
            x2 = sqrt(t2);

            cout << "roots of the equation: " << x1 << " "<< x_1 << " " << x2 << " " << x_2;
        }
    }
    else if (number == 2) {
        cout << "enter a b c for an equation of the form aax^4 + bx^3 + cx^2 + bx + a = 0";
        cin >> a >> b >> c;
        float t1, t2, D, x1, x2, x_1, x_2;
        D = b * b - 4 * a * (- c - 2 * a);
        if (D < 0) {
            cout <<  "No roots. Discriminant less than zero";
        }
        else {
            t1 = (- b - sqrt(D))/ (2 * a);
            t2 = (( - b + sqrt(D)) / (2 * a));
            cout << "t1 is " << t1 << " t2 is " << t2 << endl;
            D = t1 * t1 -4;
            if (D < 0) {
                cout << "No roots. Discriminant less than zero";
                }
            else {
                x1 = (-t1 - sqrt(D))/2;
                x2 = (-t1 + sqrt(D))/2;
            }
            D = t2 * t2 -4;
            if (D < 0) {
                cout << "No roots. Discriminant less than zero";
                }
            else {
                x_1 = (-t2 - sqrt(D))/2;
                x_2 = (-t2 + sqrt(D))/2;
            }
            cout << x1 <<" "<< x2 <<" "<< x_1 <<" "<< x_2;

        }

    }
    else if (number == 3) {

    }
    else {
        cout << "incorrect data entered";
    }
    return 0;
}