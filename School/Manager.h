#include <iostream>
using namespace std;
#include "Worker.h"

class Manager:public Worker
{
private:
public:
    Manager(char* name,long int id,int sen);
    Manager(const Manager& A);
    ~Manager()
    {}
    virtual void print()const;
    virtual float salary()const;
};
