#ifndef Worker_h
#define Worker_h

#include <iostream>
using namespace std;

class Worker
{
private:
    char* name = NULL;
    long int ID;
    int seniority;
public:
    const char* get_name()const
    {
        return name;
    }
    int get_sen()const
    {
        return seniority;
    }
    long int get_id()const
    {
        return ID;
    }
    virtual float salary()const = 0;
    Worker(char* name,long int id,int sen);
    Worker(const Worker& A);
    virtual ~Worker();
    virtual void print()const;
};
#endif
