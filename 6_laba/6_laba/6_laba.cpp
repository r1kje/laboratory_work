#include <iostream>
#include "triangle.h"

using namespace std;

int main() {
    Triangle t1(3, 4, 5);
    Triangle t2(6, 8, 10);
    Triangle t3(3, 5, 4);

    cout << "t1: " << t1 << endl;
    cout << "t2: " << t2 << endl;
    cout << "t3: " << t3 << std::endl;

    if (t1 == t3) {
        cout << "t1 and t3 are equal" << endl;
    }
    else {
        cout << "t1 and t3 are not equal" << endl;
    }

    if (t1 < t2) {
        cout << "t1 is smaller than t2" << endl;
    }
    else {
        cout << "t1 is not smaller than t2" << endl;
    }

    if (t2 > t3) {
        cout << "t2 is greater than t3" << endl;
    }
    else {
        cout << "t2 is not greater than t3" << endl;
    }

    Triangle t4 = t1 + 2;
    cout << "t4: " << t4 << endl;

    t4 += 1;
    cout << "t4: " << t4 << endl;

    Triangle t5 = t2 * 0.5;
    cout << "t5: " << t5 << endl;

    t5 *= 2;
    cout << "t5: " << t5 << endl;

    Triangle t6;
    cin >> t6;
    cout << "t6: " << t6 << endl;

    return 0;
}