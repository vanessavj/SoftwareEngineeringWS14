#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>

class converter
{
  public:
    converter();
    virtual double convert(double inValue) = 0;
    //test to see if it works

    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // CONVERTER_H
