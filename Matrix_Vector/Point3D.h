//
// Created by Ishtiaq on 12-Jul-19.
//

#include "Vector3D.h"

class Point3D{
public:
    double x, y, z;

    Point3D(double varX = 0, double varY  = 0, double varZ = 0){
        x = varX;
        y = varY;
        z = varZ;
    }

    Vector3D operator - (Point3D const &obj) {
        Vector3D result;
        result.setX(x - obj.x);
        result.setY(y - obj.y);
        result.setZ(z - obj.z);

        return result;
    }


};

