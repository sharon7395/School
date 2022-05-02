#include <iostream>
using namespace std;

#include "Teacher.h"

class Temp:public Teacher
{
private:
    int weekly_hours;
public:
    Temp(char* name,long int id,int sen ,int size, char** arr ,int hours);
    Temp(const Temp& A);
    ~Temp()
    {}
    virtual void print()const;
    virtual float salary()const;
};
