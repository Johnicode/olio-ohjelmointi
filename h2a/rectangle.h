#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    double getArea() const;
    double getCircum() const;
    void setWidth(double w);
    void setHeight(double h);
};

#endif // RECTANGLE_H
