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

    void setColor(ColorRGB newColor){
        r = newColor.r;
        g = newColor.g;
        b = newColor.b;
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


ColorRGB white(1, 1, 1);
ColorRGB black(0, 0, 0);
ColorRGB red(1, 0, 0);
ColorRGB green(0, 1, 0);
ColorRGB blue(0, 0, 1);
ColorRGB yellow(1, 1, 0);
ColorRGB cyan(0, 1, 1);
ColorRGB magenta(1, 0, 1);
