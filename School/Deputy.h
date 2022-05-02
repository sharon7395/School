#include <iostream>
using namespace std;
#include "Tutor.h"

class Deputy:public Tutor
{
private:
public:
    Deputy(char* name,long int id,int sen ,int size, char** arr ,char* arr_a);
    Deputy(const Deputy& A);
    ~Deputy()
    {}
    virtual void print()const;
    virtual float salary()const;
};
