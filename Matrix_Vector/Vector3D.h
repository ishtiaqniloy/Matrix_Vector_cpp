//
// Created by Ishtiaq on 12-Jul-19.
//
#include <cmath>
#include "Matrix.h"

#define pi (2*acos(0.0))
#define DEGREE_TO_RADIAN (pi/180.0)

class Vector3D{
    double x, y, z;
public:

    Vector3D(double varX = 0, double varY  = 0, double varZ = 0){
        x = varX;
        y = varY;
        z = varZ;
    }

    Vector3D getCopy(){
        Vector3D result;
        result.x = x;
        result.y = y;
        result.z = z;

        return result;
    }

    double getVal(){
        return sqrt(x*x + y*y + z*z);
    }

    void normalize(){
        double val = getVal();
        x = x/val;
        y = y/val;
        z = z/val;
    }

    Vector3D getUnitVector(){
        Vector3D result = getCopy();
        result.normalize();

        return result;
    }

    Matrix <double > toColumnMatrix(){
        Matrix <double > result(3, 0, false);

        result.setVal(0, 0, x);
        result.setVal(1, 0, y);
        result.setVal(2, 0, z);

        return result;
    }

    Vector3D operator + (Vector3D const &obj) {
        Vector3D result;
        result.x = x + obj.x;
        result.y = y + obj.y;
        result.z = z + obj.z;

        return result;
    }

    Vector3D operator * (double const &val) {
        Vector3D result;
        result.x = x * val;
        result.y = y * val;
        result.z = z * val;

        return result;
    }

    void operator = (Vector3D const &obj) {
        x = obj.x;
        y = obj.y;
        z = obj.z;

    }

    double getX() const {
        return x;
    }

    void setX(double x) {
        Vector3D::x = x;
    }

    double getY() const {
        return y;
    }

    void setY(double y) {
        Vector3D::y = y;
    }

    double getZ() const {
        return z;
    }

    void setZ(double z) {
        Vector3D::z = z;
    }

};

Vector3D crossProduct(Vector3D a, Vector3D b){
    Vector3D result;

    result.setX(a.getY()*b.getZ() - b.getY()*a.getZ());
    result.setY(a.getZ()*b.getX() - b.getZ()*a.getX());
    result.setZ(a.getX()*b.getY() - b.getX()*a.getY());

    return result;
}

double dotProduct(Vector3D a, Vector3D b){
    return a.getX()*b.getX() + a.getY()*b.getY() +a.getZ()*b.getZ();
}

Vector3D rotateVector(Vector3D v, Vector3D refer, double rotationAngle){
    Vector3D result, perp;

    double radianRotationAngle = rotationAngle*DEGREE_TO_RADIAN;

    perp = crossProduct(refer, v);

    result = v*cos(radianRotationAngle) + perp*sin(radianRotationAngle);

    return result;
}

Vector3D rotateVectorRodrigues(Vector3D x, Vector3D a, double rotationAngle){
    double thetaRad = DEGREE_TO_RADIAN*rotationAngle;
    Vector3D result = x*(cos(thetaRad)) + a * (dotProduct(a, x) * (1- cos(thetaRad))) + crossProduct(a, x) * (sin(thetaRad));

    return result;
}