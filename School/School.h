#include <iostream>
using namespace std;

#include "Worker.h"

class School
{
private:
    int size;
    Worker** arr = NULL;
    bool manager;
public:
    School();
    ~School();
    void Menu();
    void Add_worker();
    void Add_worker_arr(Worker* T_temp);
    
};
