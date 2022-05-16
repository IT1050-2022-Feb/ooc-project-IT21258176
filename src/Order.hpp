#ifndef Order_HPP
#define Order_HPP
#include <iostream>
#include "Customer.hpp"
#include "Staff.hpp"

using namespace std;

class Order {
 private:
  string id;
  char type;
  float weight;
  Customer* placedCustomer;
  Staff* assignedStaff;
  float calculateSubtotal();
  float calculateTax();

 public:
  Order(char, float);
  void placedBy(Customer*);
  float calcualteTotal();
  string getId();
  void displayOrderDetails();
  void assignStaff(Staff*);
};

#endif