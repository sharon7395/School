#ifndef Teacher_h
#define Teacher_h

#include <iostream>
using namespace std;
#include "Worker.h"

class Teacher:public Worker
{
private:
    int size;
    char** arr = NULL;
public:
    Teacher(char* name,long int id,int sen ,int size, char** arr);
    Teacher(const Teacher& A);
    ~Teacher();
    virtual void print()const;
    virtual float salary()const;
    virtual bool Check(char* arr)const;
};
#endif
