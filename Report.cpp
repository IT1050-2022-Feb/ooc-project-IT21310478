#include "Report.h"
Report::Report()
{
  for (int i = 0; i < SIZE1; i++)
  {
    Course[i] = 0;
  }
  for (int j = 0; j < SIZE2; j++)
  {
    Exam[j] = 0;
  }
  for (int k = 0; k < SIZE3; k++)
  {
    pay[k] = 0;
  }
}

Report::Report(Course* pCourse[], Exam* pExam[], Payment* ppay[])
{
  for (int i = 0; i < SIZE1; i++)
  {
    Course[i] = pCourse[i];
  }
  for (int j = 0; j < SIZE2; j++)
  {
    Exam[j] = pExam[j];
  }
  for (int k = 0; k < SIZE3; k++)
  {
    pay[k] = ppay[k];
  }
}

void Report::CourseDetailsReport()
{
}

void Report::ExamDetailsReport()
{
}

void Report::paymentDetailsReport()
{
}

Report::~Report()
{
    //Destructor 
    for (int i = 0; i < SIZE1; i++)
    {
        delete Course[i] ;
    }
    for (int j = 0; j < SIZE2; j++)
    {
        delete Exam[j] ;
    }
    for (int k = 0; k < SIZE3; k++)
    {
        delete pay[k] ;
    }
}
