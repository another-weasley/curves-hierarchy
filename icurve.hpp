#ifndef CURVE_HPP
#define CURVE_HPP
#include "point3d.hpp"
class ICurve
{
public:
    virtual Point3D calc_at(float t) = 0;
    virtual Point3D calc_derivative_at(float t) = 0;
    virtual ~ICurve(){}
};
#endif // CURVE_HPP
