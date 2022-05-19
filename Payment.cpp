#include <iostream>
#include <string>
#include "Payment.h"
#include "Exam.h"
#include "Course.h"

using namespace std;

Payment::Payment() {
   cout << "Default Constructor of Payment called" << endl;
}

Payment::Payment(int id, double amt, string method, string pDate, string pTime) {
   paymentID = id;
   amount = amt;
   paymentMethod = method;
   date = pDate;
   time = pTime;
}

Payment::~Payment() {
   cout << "Destructor of Payment called" << endl;
}
