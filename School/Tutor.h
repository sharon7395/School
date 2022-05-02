#ifndef Tutor_h
#define Tutor_h

#include <iostream>
using namespace std;

#include "Teacher.h"

class Tutor:public Teacher
{
private:
    char arr_class[3];
public:
    char* get_class()
    {
        return arr_class;
    }
    Tutor(char* name,long int id,int sen ,int size, char** arr ,char* arr_a);
    Tutor(const Tutor& A);
    ~Tutor()
    {}
    virtual void print()const;
    virtual float salary()const;
};
#endif
