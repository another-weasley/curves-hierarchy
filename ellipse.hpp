#ifndef ELLIPSE_HPP
#define ELLIPSE_HPP
#include "point3d.hpp"
#include "icurve.hpp"

class Ellipse: public ICurve
{
private:
    float m_xradius;
    float m_yradius;
public:
    Ellipse(float xradius, float yradius) : m_xradius(xradius), m_yradius(yradius){}
    virtual Point3D calc_at(float t);
    virtual Point3D calc_derivative_at(float t);
};

#endif // ELLIPSE_HPP
