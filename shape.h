# pragma once


# include "point.h"

class Side{
    private:
    Point self;
    Point *next;

    public:
    Side(double,double);
    Point& getSelf();
    Point& getNext();
    void setNext();
};