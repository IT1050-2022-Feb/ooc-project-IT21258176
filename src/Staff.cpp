#include "Staff.hpp"
#include "Util.hpp"
#include <iostream>

using namespace std;

Staff::Staff() {
    Util x;
    id = x.generateRandomId();
}

void Staff::setName(string Name) {
    name = Name;

}
void Staff::setJob(string Job) {
    jobtitle = Job;
}

string Staff::getId() {
    return id;
}