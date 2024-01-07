#include <iostream>
#include <cmath>

using namespace std;

bool isRightTriangle(int a, int b, int c) {
    // Check if a^2 + b^2 = c^2 or any other combination
    return (pow(a, 2) + pow(b, 2) == pow(c, 2)) ||
           (pow(b, 2) + pow(c, 2) == pow(a, 2)) ||
           (pow(c, 2) + pow(a, 2) == pow(b, 2));
}

int main() {
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >>a>>b >> c;

    if (isRightTriangle(a, b, c)) {
        cout << "The triangle is a right-angled triangle." << endl;
    } else {
        cout << "The triangle is not a right-angled triangle." << endl;
    }

    return 0;
}