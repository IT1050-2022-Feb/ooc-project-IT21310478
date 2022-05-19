#include <string>
#include "Exam.h"
#include "Course.h"

class Payment {
  private:
     int paymentID;
     double amount;
     string paymentMethod;
     string date;
     string time;

     Exam* Exam;
     Course* Course;

  public:
     Payment();
     Payment(int id, double amt, string method, string pDate, string pTime);
     void displayPaymentDetails();
     ~Payment(); 
};
