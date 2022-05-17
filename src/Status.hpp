#ifndef Status_HPP
#define Status_HPP

#include <ctime>
#include <iostream>
#include "Order.hpp"
#include "Staff.hpp"
using namespace std;

class Status {
 private:
  string id;
  string code;
  string datetime;
  Staff* staff;
  Order* order;

 public:
  Status(string);
  void assignStaff(Staff*);
  void assignOrder(Order*);
};
#endif