//
// Created by Ishtiaq on 25-Jul-19.
//



class ColorRGB{
public:
    double r, g, b;

    ColorRGB(double varR = 1, double varG  = 1, double varB = 1){
        r = varR;
        g = varG;
        b = varB;
    }

    ColorRGB operator * (double const &val) {
        ColorRGB result;
        result.r = r * val;
        result.g = g * val;
        result.b = b * val;

        return result;
    }

    ColorRGB operator + (double const &val) {
        ColorRGB result;
        result.r = r + val;
        result.g = g + val;
        result.b = b + val;

        return result;
    }


    ColorRGB operator + (ColorRGB const &obj) {
        ColorRGB result;
        result.r = obj.r;
        result.g = obj.g;
        result.b = obj.b;

        return result;
    }

    void operator = (ColorRGB const &obj) {
        r = obj.r;
        g = obj.g;
        b = obj.b;

    }

    void operator = (double const &val) {
        r = val;
        g = val;
        b = val;
    }

    ColorRGB getCopy(){
        ColorRGB result;
        result.r = r;
        result.g = g;
        result.b = b;

        return result;
    }


};
