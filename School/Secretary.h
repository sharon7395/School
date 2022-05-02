#include <iostream>
using namespace std;
#include "Worker.h"

class Secretary:public Worker
{
private:
    int over_time;
public:
    int get_hours()const
    {
        return over_time;
    }
    Secretary(char* name,long int Id,int sen ,int hours);
    Secretary(const Secretary& A);
    ~Secretary()
    {}
    virtual void print()const;
    virtual float salary()const;
};
