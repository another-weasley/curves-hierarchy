#ifndef CURVE_HPP
#define CURVE_HPP
#include "point3d.hpp"
class Curve
{
public:
    virtual Point3D calc_at(float t) = 0;
    virtual Point3D calc_derivative_at(float t) = 0;
    virtual float get_radius() {return 0;}
    virtual ~Curve(){}
};
#endif // CURVE_HPP
