#include <stdio.h>
#include <iostream>
#include "Staff.hpp"
#include "Order.hpp"
#include "Util.hpp"
using namespace std;

Order::Order(char _type, float _weight) {
  Util u;
  id = u.generateRandomId();
  type = _type;
  weight = _weight;
}

void Order::placedBy(Customer* c) {
  placedCustomer = c;
}

float Order::calculateSubtotal() {
  float ratePerKg = (type == 'd') ? 600 : 350;  // ternary operator
  return weight * ratePerKg;
}

float Order::calculateTax() {
  float TAX_RATE = (8.0 / 100), tax;
  tax = calculateSubtotal() * TAX_RATE;
  return tax;
}

float Order::calcualteTotal() {
  float total;
  total = calculateSubtotal() + calculateTax();
  return total;
}

string Order::getId() {
  return id;
}

void Order::displayOrderDetails() {
  cout << "Order ID: " << id << endl;
  if (type = 'd')
    cout << "Order Type: Dryclean" << endl;
  else
    cout << "Order Type: Laundry" << endl;

  printf("Weight: %.2f/n", weight);
  cout << "Sub Total" << calculateSubtotal() << endl
    << "Tax: " << calculateTax() << endl
    << " Total Charge: " << calcualteTotal() << endl;
}

void Order::assignStaff(Staff* s) {
  assignedStaff = s;
}