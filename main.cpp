#include <iostream>
#include "point3d.hpp"
#include "circle.hpp"
#include <math.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Point3D p(3, 0, 2);
    cout << "point: " << p << endl;
    Circle circ(1);
    float t = 3.14/4;
    cout << "with r = 1 at t=pi/4: " << circ.calc_at(t) << endl;
    return 0;
}
