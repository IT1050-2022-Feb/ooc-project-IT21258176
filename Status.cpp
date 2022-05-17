#include "Status.hpp"
#include <ctime>
#include <iostream>
#include "Order.hpp"
#include "Staff.hpp"
using namespace std;

Status::Status(string _code) {
  time_t now = time(0);
  datetime = ctime(&now);
  code = _code;
}

void Status::assignStaff(Staff* s) {
  staff = s;
}

void Status::assignOrder(Order* o) {
  order = o;
}