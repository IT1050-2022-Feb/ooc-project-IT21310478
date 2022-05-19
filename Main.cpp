#include "GuestUser.h"
#include "GuestUser.cpp"
#include "RegisteredUser.h"
#include "RegisteredUser.cpp"
#include "Employee.h"
#include "GuestUser.cpp"
#include "MarkingLecture.h"
#include "MarkingLecture.cpp"
#include "Course.h"
#include "Course.cpp"
#include "Enrolment.h"
#include "Enrolment.cpp"
#include "Exam.h"
#include "Exam.cpp"
#include "Staff.h"
#include "Staff.cpp"
#include "Payment.h"
#include "Payment.cpp"
#include "Report.h"
#include "Report.cpp"


#include <iostream>

using namespace std;
int main()
{
  //Objects Creation
	GuestUser* guser = new GuestUser();
	//Methods Calling
	guser->registerUser();
	guser->displayDetails();
  
  Employee* emp = new Employee();
	emp->enrollForCourse();
	emp->searchExam();
	emp->requestForExam();
	emp->sendFeedback();

  
  RegisteredUser * rgUser1 = new RegisteredUser(100, "200174982345", "Amal", "Colombo, Srilanka",  "amal@gmail.com", "0718723645");
    RegisteredUser * rgUser2 = new RegisteredUser(200, "200047924345", "Suneth", "Kandy, Srilanka",  "suneth@gmail.com", "07692836445");

  MarkingLecture * mlec1 = new MarkingLecture();
  MarkingLecture * mlec2 = new MarkingLecture();


  Course* Course = new Course(); // Object - Course class
  Course->addCourse();
  Course->displayCoursePrice();

  Enrolment* enr1 = new Enrolment("11 / 11 / 2000", "11.11");
  Enrolment* enr2 = new Enrolment("11 / 09 / 2000", "09.11");
  Enrolment* enr3 = new Enrolment(); // Object - Enrolment class

  Exam* Exam = new Exam(); // Object - Exam class
  Exam->addExam();
  Exam->displayExamfee();

  Staff * Staff1 = new Staff(111, "123456789101", "Pawan", "Horana, Srilanka",  "pawan@gmail.com", "0775520022");
  Staff * Staff2 = new Staff(112, "198765432102", "Dinusha", "Kalaniya, Srilanka",  "dinusha@gmail.com", "0777283834");

  Payment* payment1 = new Payment(100, 1500.0, "PAYPAL", "21.03.2022", "10.34");
  Payment* payment2 = new Payment(200, 1300.0, "Online VISA", "01.06.2022", "12.28");

  Report* rpt = new Report(); // Object - Report class
  rpt->CourseDetailsReport();
  rpt->ExamDetailsReport();
  rpt->PaymentDetailsReport();

  
  //Delete Dynamic Objects
	delete guser;
  
	delete emp;
  
  delete rgUser1;
  delete rgUser2;
  
  delete mlec1;
  delete mlec2;
  
  delete Course;
  
  delete enr1;
  delete enr2;
  delete enr3;
  
  delete Exam;
  
  delete Staff1;
  delete Staff2;
  
  delete payment1;
  delete payment2;

  delete rpt;

  return 0;
}
