#include <iostream>
#include <string>

#include "Enrolment.h"
#define SIZE1 2
#define SIZE2 2

using namespace std;

Enrolment::Enrolment() {
 cout << "Default constructor of Enrollment called" << endl;
}
Enrolment::Enrolment(string eDate, string eTime) {
 date = eDate;
 time = eTime;
}

Enrolment(int ex1, int ex2, int Course1, int course2,Employee* pEmployee, MarkingLecturer* pMarkingLecturer,Staff* pStaff);
{
  Exam[0] = new Exam(ex1);
  Exam[1] = new Exam(ex2);

  Course[0] = new Course(Course1);
  Course[1] = new Course(Course2);

  Employee = pEmployee;
  MarkingLecturer = pMarkingLecturer;
  Staff = pStaff;
}

Enrolment::~Enrolment()
{
  //Destructor 
  for (int i = 0; i < SIZE1; i++)
    {
      delete Course[i];
    }
  for (int i = 0; i < SIZE2; i++)
    {
      delete Exam[i];
    }
}
