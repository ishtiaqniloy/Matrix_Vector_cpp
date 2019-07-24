//
// Created by Ishtiaq on 12-Jul-19.
//

#include "Vector3D.h"

class Point3D{
    double x, y, z;
public:

    Point3D(double varX = 0, double varY  = 0, double varZ = 0){
        x = varX;
        y = varY;
        z = varZ;
    }

    double getX() const {
        return x;
    }

    void setX(double x) {
        Point3D::x = x;
    }

    double getY() const {
        return y;
    }

    void setY(double y) {
        Point3D::y = y;
    }

    double getZ() const {
        return z;
    }

    void setZ(double z) {
        Point3D::z = z;
    }

    Vector3D operator - (Point3D const &obj) {
        Vector3D result;
        result.setX(x - obj.getX());
        result.setY(y - obj.getY());
        result.setZ(z - obj.getZ());

        return result;
    }

    Point3D operator + (Vector3D const &obj) {
        Point3D result;
        result.setX(x - obj.getX());
        result.setY(y - obj.getY());
        result.setZ(z - obj.getZ());

        return result;
    }

    void operator = (Point3D const &obj) {
        x = obj.x;
        y = obj.y;
        z = obj.z;

    }

    void operator = (double const &val) {
        x = val;
        y = val;
        z = val;
    }


    Point3D getCopy(){
        Point3D result;
        result.x = x;
        result.y = y;
        result.z = z;

        return result;
    }




};

