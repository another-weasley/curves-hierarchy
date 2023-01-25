#include <iostream>
#include "point3d.hpp"
#include "circle.hpp"
#include <math.h>
#include "ellipse.hpp"
#include "helix.hpp"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Point3D p(3, 0, 2);
    cout << "point: " << p << endl;
    Circle circ(1);
    float t = 3.14/4;
    cout << circ.calc_at(t) << " " << circ.calc_derivative_at(t) << endl;
    Ellipse elp(2, 1);
    cout << elp.calc_at(t) << " " << elp.calc_derivative_at(t) <<  endl;
    Helix hell(1, 1);
    cout << hell.calc_at(t) << " " << hell.calc_derivative_at(t) << endl;
    return 0;
}
