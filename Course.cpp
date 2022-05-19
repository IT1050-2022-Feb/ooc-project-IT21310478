#include "Payment.h"
#include "Course.h"
#include<cstring>

Course::Course()
{
  strcpy(CourseID, "");
  strcpy(CourseDate, "");
  strcpy(CourseDescription, "");
  CoursePrice = 0;
}

Course::Course(const char pCourseID[],const char pCourseDate[], const
char pCourseDescription[], double pCoursePrice, int pay1, int pay2)
{
  strcpy(CourseID, pCourseID);
  strcpy(CourseDate, pCourseDate);
  strcpy(CourseDescription, pCourseDescription);
  CoursePrice = 0;
}

void Course::calculateCoursePrice(int id, char pType[], double pAmt)
{
  if (count < SIZE)
  {
    payment[count] = new Payment(id, pType, pAmt);
    count++;
  }
}

void Course::displayCoursePrice()
{
}

void Course::addCourse()
{
}

Course::~Course()
{
  //Destructor 
  for (int i = 0; i < SIZE; i++)
  {
    delete payment[i];
  }
}
