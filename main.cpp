#include <iostream>
#include "point3d.hpp"
#include "circle.hpp"
#include <math.h>
#include "ellipse.hpp"
#include "helix.hpp"
#include <vector>
#include <memory>
#include <stdlib.h>

std::shared_ptr <ICurve> create_random_object(int k)
{
    std::shared_ptr<ICurve> ptr = nullptr;
    // число четное и делится на 5 или 3 - создаем спираль
    if (k%2 == 0 && (k%5 == 0 || k%3 == 0))
    {
        ptr = std::make_shared<Helix>(std::rand(), std::rand());
    }
    // число четное, но не делится на 3 или 5 - создаем эллипс
    else if (k%2 == 0)
    {
        ptr = std::make_shared<Ellipse>(std::rand(), std::rand());
    }
    // число нечетное - создаем круг
    else
    {
        ptr = std::make_shared<Circle>(std::rand());
    }
    return ptr;
}
int main()
{
    // populate vector random manner with random parameters
    std::vector <std::shared_ptr<ICurve>> curve_cont;
    int n = 10;
    for (int i = 0; i < n; ++i)
    {
        curve_cont.push_back(create_random_object(i + std::rand()));
    }
    // print coordinates of points and derivatives of all curves in the container at t=PI/4
    float t = 3.14/4;
    for (int i = 0; i < n; ++i)
    {
        std::cout << "Point: " << curve_cont[i]->calc_at(t) << " ";
        std::cout << "First derivative: " << curve_cont[i]->calc_derivative_at(t) << std::endl;
    }

    return 0;
}
