#include <iostream>
using namespace std;
#include <cmath>
int main() {
    double x1, y1, x2, y2, x3, y3, h1, h3, h2, P, s1, m1, m2, m3, b1, b2, b3, r1, r2, r3, g1, g2, g3, r, R, s3, s2, p;
    cout << "Enter the coordinates of the sides of the triangle (x1, y1), (x2, y2), (x3, y3)";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float a, b, c;
    a = sqrt(pow((x1 - x2),  2) + pow((y1 - y2), 2));
    b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    
    if ( a + b > c  &&  a + c > b  &&  b + c > a) {
        cout << "Triangle exists. Side A of the triangle is equal to: " << a << " side B of the triangle is equal to: " << b << " side C of the triangle is equal to: " << c;
        P = a + b + c;
        p = P / 2; 
        s1 = sqrt(p * (p - a) * (p - b) * (p - c));
        s2 = a * h1 / 2;
        h1 = 2 * s1 / a;
        h2 = 2 * s1 / b;
        h3 = 2 * s1 / c;
        cout << "2. lengths of all altitudes of the triangle = " << h1 << " " << h2 << " " << h3 << endl;
    
        m1 = sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2)) / 2;
        m2 = sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2)) / 2; 
        m3 = sqrt(2 * pow(b, 2) + 2 * pow(a, 2) - pow(c, 2)) / 2; 
        cout << "3. lengths of all medians of the triangle = " << m1 << " " << m2 << " " << m3<< endl;
       
        b3 = sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b); 
        b2 = sqrt(a * c * (a + b + c) * (a + c - b)) / (a + c);
        b1 = sqrt(b * c * (a + b + c) * (b + c - a)) / (b + c); 
        cout << "4. lengths of all bisectors of the triangle = " << b1 << " " << b2 << " " << b3 << '\n';
    
        r1 = acos((b * b + c * c - a * a) / (2 * b * c));
        r2 = acos((a * a + c * c - b * b) / (2 * a * c));
        r3 = acos((b * b + a * a - c * c) / (2 * b * a));
        g1 = r1 * 57.29577951;
        g2 = r2 * 57.29577951;
        g3 = r3 * 57.29577951;
        cout << "5. degree measures of triangle angles = " << g1 << " " << g2 << " " << g3 << '\n';
        cout << "5. radian measures of triangle angles = " << r1 << " " << r2 << " " << r3 << '\n';
    
        r = s1 / p;
        R = a * b * c / (4 * s1);
        s3 = r * p;
        cout << "6. radii of inscribed and circumscribed circles = " << r << " " << R << '\n';
    
        cout << "7. area and length of the inscribed circle = " <<3.14159265 * r * r << " " <<2 * 3.14159265 * r << '\n';
        cout << "7. area and length of the circumscribed circle = " << 3.14159265 * R * R << " " <<  2 * 3.14159265 * R << '\n';
        cout << "8. 3 triangle area values = " << s1 << " " << s2 << " " << s3 << '\n';
        cout << "8. triangle perimeter = " << P;
     }

    else 
        cout << "triangle doesn't exist";

    return 0;
}