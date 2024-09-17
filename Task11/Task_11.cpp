#include <iostream>
using namespace std;

int main()
{
    int h1, h2, min1, min2, h, m;
    cout << "enter start time (first hours then minutes) " << endl;
    cin >> h1 >> min1;
    if (h1 >= 24 || min1 >= 60)
    {
        cout << " You are lox, there are 24 hours in a day and 60 minutes in hour" << endl;
        return 0;
    }
    
    cout << "enter finish time (first hours then minutes) ";
    cin >> h2 >> min2;
    if (min1 >= 60 || h2 >= 24)
    {
        cout << " You are lox, there are 24 hours in a day and 60 minutes in hour" << endl;
        return 0;
    }

    if (min1 > min2) 
    {
        h2 = h2 - 1; 
        min2 = min2 + 60; 
    }
    if (h2 < h1)
    {
        h2 = h2 + 24;
    }
    h = h2 - h1;
    m = min2 - min1;  
    cout << h << " hours " << m << " minutes ";
    return 0;
}