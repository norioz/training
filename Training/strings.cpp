#include <iostream>
#include <string>
#include "strings.h"

using namespace std;

int hackerrank::strings ()
{
    string a = "INVALID", b = "INVALID";
    cin >> a >> b;

    // print the string sizes
    cout << a.size() << " " << b.size() << endl;

    // print the concattenation
    cout << a + b << endl;

    // swap the first characters
    char t = a[0];
    a[0] = b[0];
    b[0] = t;
    cout << a << " " << b << endl;

    return 0;
}
