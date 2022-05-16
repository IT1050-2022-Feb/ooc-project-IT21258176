#ifndef Staff_HPP 
#define Staff_HPP

#include <iostream>
using namespace std;

class Staff {
private:
    string id;
    string jobtitle;
    string name;

public:
    Staff();
    string getId();
    void setName(string Name);
    void setJob(string Job);
};

#endif
