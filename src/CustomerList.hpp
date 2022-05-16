#ifndef CUSTOMER_LIST_HPP
#define CUSTOMER_LIST_HPP

#include <vector>
#include "Customer.hpp"

using std::vector;

class CustomerList {
 private:
  vector<Customer*> elements;

 public:
  CustomerList();
  CustomerList* push(Customer*);
  Customer* login(string username, string password);
};

#endif