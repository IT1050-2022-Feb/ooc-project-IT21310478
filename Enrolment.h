#include <string>
#include "Course.h" 
#include "Exam.h"  
#include "Employee.h"   
#include "MarkingLecturer.h"    
#include "Staff.h"    

#define SIZE1 5
#define SIZE2 5

class Enrolment {
  private:
    string date;
    string time;

    Course* Course[SIZE1];
    Exam* Exam[SIZE2];
    Employee* Employee;
    MarkingLecturer* MarkingLecturer;
    Staff* Staff;

  public:
     Enrolment();
     Enrolment(string eDate, string eTime);
     void setDate(string eDate);
     void setTime(string eTime);
     void displayDetails();
     Enrolment(int ex1, int ex22, int Course1, int course2,Employee* pEmployee, MarkingLecturer* pMarkingLecturer,Staff* pstaff);
     ~Enrolment();

};
